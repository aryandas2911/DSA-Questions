// Ques Link: https://leetcode.com/problems/balanced-binary-tree/description/

#include <iostream>
#include <algorithm>
#include <cmath>
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
    int height(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        int lh = height(root->left);
        int rh = height(root->right);

        if (abs(lh - rh) > 1)
        {
            return -1;
        }

        if (lh == -1 || rh == -1)
        {
            return -1;
        }

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode *root)
    {
        return height(root) != -1;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution solution;

    if (solution.isBalanced(root))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}