// Ques Link: https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        map<int, int> inMap;

        for (int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }

        return buildTree(preorder, 0, preorder.size() - 1,
                         inorder, 0, inorder.size() - 1, inMap);
    }

    TreeNode *buildTree(vector<int> &preorder, int preStart, int preEnd,
                        vector<int> &inorder, int inStart, int inEnd,
                        map<int, int> &inMap)
    {

        if (preStart > preEnd || inStart > inEnd)
        {
            return nullptr;
        }

        TreeNode *root = new TreeNode(preorder[preStart]);

        int inRoot = inMap[root->val];
        int numsLeft = inRoot - inStart;

        root->left = buildTree(preorder, preStart + 1,
                               preStart + numsLeft, inorder,
                               inStart, inRoot - 1, inMap);

        root->right = buildTree(preorder, preStart + numsLeft + 1,
                                preEnd, inorder,
                                inRoot + 1, inEnd, inMap);

        return root;
    }
};

int main()
{
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution obj;
    TreeNode *root = obj.buildTree(preorder, inorder);

    cout << "Root: " << root->val << endl;
    cout << "Left Child: " << root->left->val << endl;
    cout << "Right Child: " << root->right->val << endl;

    return 0;
}