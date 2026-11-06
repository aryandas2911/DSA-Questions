// Ques Link: https://leetcode.com/problems/serialize-and-deserialize-binary-tree/description/

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec
{
public:
    string serialize(TreeNode *root)
    {
        if (!root)
            return "#";

        string s = "";
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *currNode = q.front();
            q.pop();

            if (currNode == NULL)
            {
                s += "#,";
            }
            else
            {
                s += to_string(currNode->val) + ",";
                q.push(currNode->left);
                q.push(currNode->right);
            }
        }

        s.pop_back();
        return s;
    }

    TreeNode *deserialize(string data)
    {
        if (data == "#")
            return NULL;

        vector<string> nodes;
        string temp = "";

        for (char c : data)
        {
            if (c == ',')
            {
                nodes.push_back(temp);
                temp = "";
            }
            else
            {
                temp += c;
            }
        }
        nodes.push_back(temp);

        TreeNode *root = new TreeNode(stoi(nodes[0]));
        queue<TreeNode *> q;
        q.push(root);

        int i = 1;

        while (!q.empty() && i < nodes.size())
        {
            TreeNode *currNode = q.front();
            q.pop();

            if (i < nodes.size() && nodes[i] != "#")
            {
                currNode->left = new TreeNode(stoi(nodes[i]));
                q.push(currNode->left);
            }
            i++;

            if (i < nodes.size() && nodes[i] != "#")
            {
                currNode->right = new TreeNode(stoi(nodes[i]));
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec ser, deser;

    string data = ser.serialize(root);
    cout << "Serialized Tree: " << data << endl;

    TreeNode *ans = deser.deserialize(data);

    cout << "Deserialized Tree: " << deser.serialize(ans) << endl;

    return 0;
}
