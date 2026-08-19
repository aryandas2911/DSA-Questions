// Ques Link: https://leetcode.com/problems/rotate-list/description/

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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode *temp = head;
        int len = 1;

        while (temp->next != NULL)
        {
            temp = temp->next;
            len++;
        }

        k = k % len;

        if (k == 0)
            return head;

        temp->next = head;

        ListNode *temp2 = head;
        int i = 0;

        while (i < len - k - 1)
        {
            temp2 = temp2->next;
            i++;
        }

        ListNode *newHead = temp2->next;
        temp2->next = NULL;

        return newHead;
    }
};

int main()
{
    // Create: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;

    Solution obj;
    head = obj.rotateRight(head, k);

    // Print rotated list
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}