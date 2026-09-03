// Ques Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

#include <iostream>
#include <algorithm>
#include <climits>
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
    int maxi = INT_MIN;

    int helper(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftSum = max(0, helper(root->left));
        int rightSum = max(0, helper(root->right));

        maxi = max(maxi, leftSum + root->val + rightSum);

        return root->val + max(leftSum, rightSum);
    }

    int maxPathSum(TreeNode *root)
    {
        helper(root);
        return maxi;
    }
};

int main()
{
    // Tree:
    //      1
    //     / \
    //    2   3

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    Solution obj;

    cout << "Maximum Path Sum: " << obj.maxPathSum(root) << endl;

    return 0;
}