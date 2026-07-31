// Ques Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

#include <iostream>
using namespace std;

// Definition for singly-linked list.
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;

        if (head == NULL)
        {
            return head;
        }

        while (temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                ListNode *same = temp->next;
                temp->next = same->next;
                delete same;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};

// Function to print the linked list
void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val;
        if (head->next != NULL)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create: 1 -> 1 -> 2 -> 3 -> 3
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.deleteDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

    return 0;
}