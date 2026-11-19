// Ques Link: https://leetcode.com/problems/delete-node-in-a-bst/description/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
    TreeNode *helper(TreeNode *node)
    {
        if (node->left == NULL)
        {
            return node->right;
        }
        else if (node->right == NULL)
        {
            return node->left;
        }
        else
        {
            TreeNode *rightChild = node->right;
            TreeNode *leftChild = node->left;

            while (leftChild->right != NULL)
            {
                leftChild = leftChild->right;
            }

            leftChild->right = rightChild;
            return node->left;
        }
    }

public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
        {
            return NULL;
        }

        if (root->val == key)
        {
            return helper(root);
        }

        TreeNode *curr = root;

        while (curr != NULL)
        {
            if (curr->val > key)
            {
                if (curr->left != NULL && curr->left->val == key)
                {
                    curr->left = helper(curr->left);
                    break;
                }
                curr = curr->left;
            }
            else
            {
                if (curr->right != NULL && curr->right->val == key)
                {
                    curr->right = helper(curr->right);
                    break;
                }
                curr = curr->right;
            }
        }

        return root;
    }
};

void inorder(TreeNode *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    int key = 3;

    Solution obj;

    cout << "Before deletion: ";
    inorder(root);

    root = obj.deleteNode(root, key);

    cout << "\nAfter deletion: ";
    inorder(root);

    return 0;
}