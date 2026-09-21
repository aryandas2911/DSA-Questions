// Ques Link: https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
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
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parentTrack;
        queue<TreeNode *> q;

        // Build parent map
        q.push(root);
        parentTrack[root] = NULL;

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();

            if (node->left)
            {
                parentTrack[node->left] = node;
                q.push(node->left);
            }

            if (node->right)
            {
                parentTrack[node->right] = node;
                q.push(node->right);
            }
        }

        // BFS from target
        unordered_set<TreeNode *> visited;

        q.push(target);
        visited.insert(target);

        int currLevel = 0;

        while (!q.empty() && currLevel < k)
        {

            int size = q.size();

            while (size--)
            {
                TreeNode *node = q.front();
                q.pop();

                // Left child
                if (node->left && !visited.count(node->left))
                {
                    visited.insert(node->left);
                    q.push(node->left);
                }

                // Right child
                if (node->right && !visited.count(node->right))
                {
                    visited.insert(node->right);
                    q.push(node->right);
                }

                // Parent
                TreeNode *parent = parentTrack[node];

                if (parent && !visited.count(parent))
                {
                    visited.insert(parent);
                    q.push(parent);
                }
            }

            currLevel++;
        }

        // Nodes currently in queue are at distance k
        vector<int> ans;

        while (!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }

        return ans;
    }
};

int main()
{

    TreeNode *root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode *target = root->left; // Node 5
    int k = 2;

    Solution obj;

    vector<int> result = obj.distanceK(root, target, k);

    cout << "Nodes at distance " << k << " from target: ";

    for (int x : result)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}