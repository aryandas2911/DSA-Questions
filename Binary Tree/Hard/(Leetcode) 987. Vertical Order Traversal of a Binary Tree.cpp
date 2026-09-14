// Ques Link: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, map<int, multiset<int>>> mp;
        queue<tuple<TreeNode *, int, int>> q;

        q.push({root, 0, 0});

        while (!q.empty())
        {
            auto [node, x, y] = q.front();
            q.pop();

            mp[x][y].insert(node->val);

            if (node->left)
                q.push({node->left, x - 1, y + 1});

            if (node->right)
                q.push({node->right, x + 1, y + 1});
        }

        vector<vector<int>> ans;

        for (auto &col : mp)
        {
            vector<int> temp;

            for (auto &level : col.second)
                temp.insert(temp.end(),
                            level.second.begin(),
                            level.second.end());

            ans.push_back(temp);
        }

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
    root->right->right = new TreeNode(6);

    Solution obj;
    vector<vector<int>> ans = obj.verticalTraversal(root);

    for (auto &col : ans)
    {
        for (int x : col)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}