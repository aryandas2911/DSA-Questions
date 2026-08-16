// Ques Link: https://leetcode.com/problems/swap-nodes-in-pairs/description/

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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *newHead = head->next;
        ListNode *prev = NULL;
        ListNode *p1 = head;

        while (p1 != NULL && p1->next != NULL)
        {
            ListNode *p2 = p1->next;

            p1->next = p2->next;
            p2->next = p1;

            if (prev != NULL)
            {
                prev->next = p2;
            }

            prev = p1;
            p1 = p1->next;
        }

        return newHead;
    }
};

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
    // Create: 1 -> 2 -> 3 -> 4
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original: ";
    printList(head);

    Solution solution;
    head = solution.swapPairs(head);

    cout << "Swapped:  ";
    printList(head);

    return 0;
}