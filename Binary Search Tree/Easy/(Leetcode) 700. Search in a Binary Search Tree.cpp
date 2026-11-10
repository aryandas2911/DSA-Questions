// Ques Link: https://leetcode.com/problems/search-in-a-binary-search-tree/description/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->val == val)
        {
            return root;
        }
        else
        {
            if (root->val < val)
            {
                return searchBST(root->right, val);
            }
            else
            {
                return searchBST(root->left, val);
            }
        }
    }
};

int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution obj;
    int val = 2;

    TreeNode *result = obj.searchBST(root, val);

    if (result != NULL)
    {
        cout << "Found: " << result->val;
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}