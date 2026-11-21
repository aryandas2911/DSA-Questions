// Ques Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/

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
    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        int i = 0;
        return build(preorder, i, INT_MAX);
    }

    TreeNode *build(vector<int> &preorder, int &i, int upper)
    {
        if (i >= preorder.size() || preorder[i] > upper)
            return NULL;

        TreeNode *root = new TreeNode(preorder[i++]);
        root->left = build(preorder, i, root->val);
        root->right = build(preorder, i, upper);

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
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    Solution sol;
    TreeNode *root = sol.bstFromPreorder(preorder);

    inorder(root);

    return 0;
}