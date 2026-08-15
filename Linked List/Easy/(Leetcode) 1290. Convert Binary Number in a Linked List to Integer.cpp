// Ques Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/

#include <iostream>
#include <string>
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
    int getDecimalValue(ListNode *head)
    {
        string num = "";
        ListNode *temp = head;

        while (temp != NULL)
        {
            num = num + to_string(temp->val);
            temp = temp->next;
        }

        return stoi(num, nullptr, 2);
    }
};

int main()
{
    // Creating: 1 -> 0 -> 1 -> 1
    ListNode *head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(1);

    Solution obj;

    cout << "Decimal value: " << obj.getDecimalValue(head) << endl;

    return 0;
}