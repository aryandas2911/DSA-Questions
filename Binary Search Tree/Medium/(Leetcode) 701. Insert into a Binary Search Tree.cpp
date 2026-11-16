// Ques Link: https://leetcode.com/problems/insert-into-a-binary-search-tree/description/

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
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            TreeNode *node = new TreeNode(val);
            return node;
        }

        TreeNode *curr = root;
        while (true)
        {
            if (val < curr->val && curr->left != NULL)
            {
                curr = curr->left;
            }
            else if (val > curr->val && curr->right != NULL)
            {
                curr = curr->right;
            }
            else
            {
                break;
            }
        }

        TreeNode *valNode = new TreeNode(val);
        if (val < curr->val)
        {
            curr->left = valNode;
        }
        else
        {
            curr->right = valNode;
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
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int val = 5;

    Solution obj;
    root = obj.insertIntoBST(root, val);

    cout << "BST after insertion: ";
    inorder(root);

    return 0;
}