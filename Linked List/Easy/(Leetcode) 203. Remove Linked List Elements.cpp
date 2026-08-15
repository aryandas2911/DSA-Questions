// Ques Link: https://leetcode.com/problems/remove-linked-list-elements/description/

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
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != NULL && head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }

        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *temp = head;

        while (temp->next != NULL)
        {
            ListNode *front = temp->next;

            if (front->val == val)
            {
                temp->next = front->next;
                delete front;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);

    int val = 6;

    Solution obj;
    head = obj.removeElements(head, val);

    printList(head);

    return 0;
}