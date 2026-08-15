// Ques Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        int i = 0;
        while (i < n)
        {
            fast = fast->next;
            i++;
        }

        if (fast == NULL)
        {
            ListNode *del = head;
            head = head->next;
            delete del;
            return head;
        }

        while (fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode *del = slow->next;
        slow->next = slow->next->next;
        delete del;

        return head;
    }
};

int main()
{
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2;

    Solution obj;
    head = obj.removeNthFromEnd(head, n);

    // Print the resulting list
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    // Free remaining memory
    while (head != NULL)
    {
        ListNode *del = head;
        head = head->next;
        delete del;
    }

    return 0;
}