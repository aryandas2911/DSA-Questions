// Ques Link: https://leetcode.com/problems/count-complete-tree-nodes/description/

#include <iostream>
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
    int countNodes(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int lh = checkLeftHeight(root);
        int rh = checkRightHeight(root);

        if (lh == rh)
            return (1 << lh) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int checkLeftHeight(TreeNode *node)
    {
        int count = 0;

        while (node)
        {
            count++;
            node = node->left;
        }

        return count;
    }

    int checkRightHeight(TreeNode *node)
    {
        int count = 0;

        while (node)
        {
            count++;
            node = node->right;
        }

        return count;
    }
};

int main()
{
    /*
            1
           / \
          2   3
         / \  /
        4  5 6
    */

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    Solution obj;

    cout << "Number of nodes: " << obj.countNodes(root) << endl;

    return 0;
}