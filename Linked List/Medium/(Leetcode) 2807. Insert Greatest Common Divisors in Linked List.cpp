// Ques Link: https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/description/

#include <iostream>
#include <numeric>
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
    ListNode *insertGreatestCommonDivisors(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *temp = head;

        while (temp->next != NULL)
        {
            int val1 = temp->val;
            int val2 = temp->next->val;

            ListNode *next = temp->next;
            ListNode *newNode = new ListNode(gcd(val1, val2));

            temp->next = newNode;
            newNode->next = next;

            temp = next;
        }

        return head;
    }
};

int main()
{
    // Creating: 18 -> 6 -> 10 -> 3
    ListNode *head = new ListNode(18);
    head->next = new ListNode(6);
    head->next->next = new ListNode(10);
    head->next->next->next = new ListNode(3);

    Solution obj;
    head = obj.insertGreatestCommonDivisors(head);

    // Print the resulting list
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val;

        if (temp->next != NULL)
        {
            cout << " -> ";
        }

        temp = temp->next;
    }

    cout << endl;

    return 0;
}