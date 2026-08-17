// Ques Link: https://leetcode.com/problems/sort-list/description/

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
    ListNode *sortList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *left = head;
        ListNode *right = slow->next;
        slow->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;

        while (left != NULL && right != NULL)
        {
            if (left->val <= right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }

            curr = curr->next;
        }

        if (left != NULL)
        {
            curr->next = left;
        }
        else
        {
            curr->next = right;
        }

        return dummy->next;
    }
};

int main()
{
    // Create: 4 -> 2 -> 1 -> 3
    ListNode *head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution obj;

    // Sort
    head = obj.sortList(head);

    // Print sorted list
    ListNode *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }

    return 0;
}