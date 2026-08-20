// Ques Link: https://leetcode.com/problems/copy-list-with-random-pointer/description/

#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *temp = head;

        // Step 1: Insert copied nodes between original nodes
        while (temp != NULL)
        {
            Node *newNode = new Node(temp->val);

            newNode->next = temp->next;
            temp->next = newNode;

            temp = newNode->next;
        }

        // Step 2: Assign random pointers
        temp = head;

        while (temp != NULL)
        {
            Node *copyNode = temp->next;

            if (temp->random != NULL)
                copyNode->random = temp->random->next;
            else
                copyNode->random = NULL;

            temp = temp->next->next;
        }

        // Step 3: Separate the copied list from the original list
        Node *dummy = new Node(-1);
        Node *temp2 = dummy;

        temp = head;

        while (temp != NULL)
        {
            Node *copyNode = temp->next;

            temp->next = copyNode->next;

            temp2->next = copyNode;
            temp2 = temp2->next;

            temp = temp->next;
        }

        return dummy->next;
    }
};

int main()
{
    // Create list:
    // 1 -> 2 -> 3 -> NULL
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Set random pointers
    head->random = head->next->next;       // 1 -> 3
    head->next->random = head;             // 2 -> 1
    head->next->next->random = head->next; // 3 -> 2

    Solution obj;
    Node *copiedHead = obj.copyRandomList(head);

    // Print copied list
    Node *temp = copiedHead;

    while (temp != NULL)
    {
        cout << "Node: " << temp->val;

        if (temp->random != NULL)
            cout << ", Random: " << temp->random->val;
        else
            cout << ", Random: NULL";

        cout << endl;

        temp = temp->next;
    }

    return 0;
}