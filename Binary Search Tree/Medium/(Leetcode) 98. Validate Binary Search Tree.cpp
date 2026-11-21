// Ques Link: https://leetcode.com/problems/validate-binary-search-tree/description/

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
    bool isValidBST(TreeNode *root)
    {
        return validity(root, LLONG_MIN, LLONG_MAX);
    }

    bool validity(TreeNode *root, long long mini, long long maxi)
    {
        if (root == NULL)
            return true;

        if (root->val >= maxi || root->val <= mini)
        {
            return false;
        }

        return validity(root->left, mini, root->val) &&
               validity(root->right, root->val, maxi);
    }
};

int main()
{
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    Solution sol;

    cout << (sol.isValidBST(root) ? "true" : "false");

    return 0;
}