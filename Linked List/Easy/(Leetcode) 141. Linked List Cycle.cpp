// Ques Link: https://leetcode.com/problems/linked-list-cycle/description/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    // Creating: 1 -> 2 -> 3 -> 4
    //                 ^         |
    //                 |_________|

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    // Create a cycle: 4 -> 2
    head->next->next->next->next = head->next;

    Solution obj;

    if (obj.hasCycle(head))
        cout << "Cycle exists" << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}