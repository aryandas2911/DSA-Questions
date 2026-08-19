// Ques Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;

        while (temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;

        while (temp != NULL)
        {

            int i = 1;
            ListNode *kNode = temp;

            while (i < k)
            {
                if (kNode->next == NULL)
                    return head;

                kNode = kNode->next;
                i++;
            }

            ListNode *nextNode = kNode->next;
            kNode->next = NULL;

            ListNode *groupHead = temp;
            temp = reverse(temp);

            if (prev == NULL)
                head = temp;
            else
                prev->next = temp;

            groupHead->next = nextNode;
            prev = groupHead;
            temp = nextNode;
        }

        return head;
    }
};

int main()
{
    // Create: 1 -> 2 -> 3 -> 4 -> 5 -> 6
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    int k = 2;

    Solution obj;
    head = obj.reverseKGroup(head, k);

    // Print result
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}