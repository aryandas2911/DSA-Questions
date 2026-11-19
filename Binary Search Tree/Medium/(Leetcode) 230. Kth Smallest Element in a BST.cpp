// Ques Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

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
    int count = 0;
    int ans = -1;

    void inorder(TreeNode *node, int k)
    {
        if (node == NULL)
        {
            return;
        }

        inorder(node->left, k);

        count++;
        if (count == k)
        {
            ans = node->val;
            return;
        }

        inorder(node->right, k);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        count = 0;
        ans = -1;
        inorder(root, k);
        return ans;
    }
};

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

    int k = 3;

    Solution obj;
    cout << "Kth Smallest: " << obj.kthSmallest(root, k);

    return 0;
}