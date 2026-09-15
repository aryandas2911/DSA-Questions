// Ques Link: https://leetcode.com/problems/binary-tree-right-side-view/description/

#include <iostream>
#include <vector>
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
    void dfs(TreeNode *node, int level, vector<int> &res)
    {
        if (node == NULL)
            return;

        if (res.size() == level)
            res.push_back(node->val);

        dfs(node->right, level + 1, res);
        dfs(node->left, level + 1, res);
    }

    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> res;
        dfs(root, 0, res);
        return res;
    }
};

int main()
{

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);

    Solution obj;

    vector<int> result = obj.rightSideView(root);

    cout << "Right Side View: ";
    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}