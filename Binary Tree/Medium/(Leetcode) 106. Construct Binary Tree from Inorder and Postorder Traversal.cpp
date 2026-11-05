// Ques Link: https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

#include <bits/stdc++.h>
using namespace std;

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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        if (inorder.size() != postorder.size())
        {
            return NULL;
        }

        map<int, int> inMap;

        for (int i = 0; i < inorder.size(); i++)
        {
            inMap[inorder[i]] = i;
        }

        return buildTree(inorder, 0, inorder.size() - 1, postorder, 0,
                         postorder.size() - 1, inMap);
    }

    TreeNode *buildTree(vector<int> &inorder, int is, int ie,
                        vector<int> &postorder, int po, int pe,
                        map<int, int> &inMap)
    {

        if (po > pe || is > ie)
        {
            return NULL;
        }

        TreeNode *root = new TreeNode(postorder[pe]);

        int inRoot = inMap[root->val];
        int numsleft = inRoot - is;

        root->left = buildTree(inorder, is, inRoot - 1, postorder, po,
                               po + numsleft - 1, inMap);

        root->right = buildTree(inorder, inRoot + 1, ie, postorder,
                                po + numsleft, pe - 1, inMap);

        return root;
    }
};

void printPreorder(TreeNode *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main()
{
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};

    Solution obj;
    TreeNode *root = obj.buildTree(inorder, postorder);

    cout << "Preorder Traversal: ";
    printPreorder(root);

    return 0;
}