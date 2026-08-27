// Ques Link: https://leetcode.com/problems/merge-nodes-in-between-zeros/description/

#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
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
    ListNode *mergeNodes(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *dummy = new ListNode(0);
        ListNode *curr = dummy;
        ListNode *temp = head;

        while (temp->next != NULL)
        {
            int sum = 0;
            ListNode *nextNode = temp->next;

            while (nextNode->val != 0)
            {
                sum += nextNode->val;
                nextNode = nextNode->next;
            }

            ListNode *newNode = new ListNode(sum);
            curr->next = newNode;
            curr = curr->next;
            temp = nextNode;
        }

        return dummy->next;
    }
};

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
    // Example: 0 -> 3 -> 1 -> 0 -> 4 -> 5 -> 2 -> 0
    ListNode *head = new ListNode(0);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next->next = new ListNode(0);

    Solution obj;

    ListNode *result = obj.mergeNodes(head);

    cout << "Merged List: ";
    printList(result);

    return 0;
}