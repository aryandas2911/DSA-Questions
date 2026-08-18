// Ques Link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;

        while (temp1 != temp2)
        {
            if (temp1 == NULL)
                temp1 = headB;
            else
                temp1 = temp1->next;

            if (temp2 == NULL)
                temp2 = headA;
            else
                temp2 = temp2->next;
        }

        return temp1;
    }
};

int main()
{
    // List A: 1 -> 2 -> 3 \
    //                     -> 7 -> 8
    // List B:      4 -> 5 /

    ListNode *headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = new ListNode(3);

    ListNode *headB = new ListNode(4);
    headB->next = new ListNode(5);

    // Create intersection
    ListNode *intersection = new ListNode(7);
    intersection->next = new ListNode(8);

    headA->next->next->next = intersection;
    headB->next->next = intersection;

    Solution obj;

    ListNode *result = obj.getIntersectionNode(headA, headB);

    if (result != NULL)
        cout << "Intersection at node: " << result->val << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}