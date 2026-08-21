// Ques Link: https://leetcode.com/problems/binary-tree-inorder-traversal/description/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> ans;

    vector<int> inorderTraversal(TreeNode *root)
    {
        if (root == NULL)
        {
            return ans;
        }

        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right);

        return ans;
    }
};

int main()
{

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution obj;
    vector<int> result = obj.inorderTraversal(root);

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}