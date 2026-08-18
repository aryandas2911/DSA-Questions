// Ques Link: https://leetcode.com/problems/add-two-numbers/description/

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = carry;

            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};

int main()
{
    // 342: 2 -> 4 -> 3
    ListNode *l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // 465: 5 -> 6 -> 4
    ListNode *l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution obj;
    ListNode *result = obj.addTwoNumbers(l1, l2);

    // Print result: 7 -> 0 -> 8
    while (result != NULL)
    {
        cout << result->val;
        if (result->next != NULL)
            cout << " -> ";
        result = result->next;
    }

    return 0;
}