// Ques Link: https://leetcode.com/problems/linked-list-cycle-ii/description/

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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                slow = head;

                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;
    }
};

int main()
{
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Create a cycle: 5 -> 3
    head->next->next->next->next->next = head->next->next;

    Solution obj;
    ListNode *cycleStart = obj.detectCycle(head);

    if (cycleStart != NULL)
        cout << "Cycle starts at node: " << cycleStart->val << endl;
    else
        cout << "No cycle detected." << endl;

    return 0;
}