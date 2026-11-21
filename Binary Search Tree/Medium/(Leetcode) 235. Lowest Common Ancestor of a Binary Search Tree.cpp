// Ques Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/

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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        while (root != NULL)
        {
            if (p->val < root->val && q->val < root->val)
            {
                root = root->left;
            }
            else if (p->val > root->val && q->val > root->val)
            {
                root = root->right;
            }
            else
            {
                return root;
            }
        }
        return NULL;
    }
};

int main()
{
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);

    TreeNode *p = root->left;
    TreeNode *q = root->right;

    Solution sol;
    TreeNode *lca = sol.lowestCommonAncestor(root, p, q);

    if (lca != NULL)
    {
        cout << lca->val << endl;
    }

    return 0;
}