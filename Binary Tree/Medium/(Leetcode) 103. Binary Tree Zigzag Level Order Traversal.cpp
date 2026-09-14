// Ques Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;

        if (root == NULL)
        {
            return result;
        }

        queue<TreeNode *> nodeQueue;
        nodeQueue.push(root);

        bool lefttoright = true;

        while (!nodeQueue.empty())
        {
            int size = nodeQueue.size();
            vector<int> row;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = nodeQueue.front();
                nodeQueue.pop();

                if (node->left)
                {
                    nodeQueue.push(node->left);
                }

                if (node->right)
                {
                    nodeQueue.push(node->right);
                }

                row.push_back(node->val);
            }

            if (lefttoright)
            {
                result.push_back(row);
            }
            else
            {
                reverse(row.begin(), row.end());
                result.push_back(row);
            }

            lefttoright = !lefttoright;
        }

        return result;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    Solution solution;

    vector<vector<int>> result = solution.zigzagLevelOrder(root);

    for (const auto &level : result)
    {
        for (int value : level)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}