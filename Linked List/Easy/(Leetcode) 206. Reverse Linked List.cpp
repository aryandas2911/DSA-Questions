// Ques Link: https://leetcode.com/problems/reverse-linked-list/description/

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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *current = head;
        ListNode *prev = NULL;

        while (current != NULL)
        {
            ListNode *front = current->next;
            current->next = prev;
            prev = current;
            current = front;
        }

        return prev;
    }
};

int main()
{
    // Create linked list: 1 -> 2 -> 3 -> 4 -> NULL
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Reverse the linked list
    Solution obj;
    head = obj.reverseList(head);

    // Print reversed list
    ListNode *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }

    return 0;
}