// Ques Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};

// Function to print the linked list
void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Creating linked list: 4 -> 5 -> 1 -> 9
    ListNode *head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original List: ";
    printList(head);

    Solution obj;

    // Delete node with value 5
    obj.deleteNode(head->next);

    cout << "After deleting 5: ";
    printList(head);

    // Free remaining memory
    while (head != NULL)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}