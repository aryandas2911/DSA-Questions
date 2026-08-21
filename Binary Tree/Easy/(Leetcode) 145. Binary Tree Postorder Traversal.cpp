// Ques Link: https://leetcode.com/problems/binary-tree-postorder-traversal/description/

#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
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

    vector<int> postorderTraversal(TreeNode *root)
    {
        if (root == NULL)
        {
            return ans;
        }

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        ans.push_back(root->val);

        return ans;
    }
};

int main()
{

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;
    vector<int> result = obj.postorderTraversal(root);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}