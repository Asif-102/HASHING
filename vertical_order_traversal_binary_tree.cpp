#include "bits/stdc++.h"

using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inputTree(Node *&root)
{
    int n;
    cin >> n;

    root = new Node(n);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *presentNode = q.front();
        q.pop();

        Node *leftNode = NULL;
        Node *rightNode = NULL;

        int a, b;
        cin >> a >> b;

        if (a != -1)
        {
            leftNode = new Node(a);
            q.push(leftNode);
        }
        if (b != -1)
        {
            rightNode = new Node(b);
            q.push(rightNode);
        }

        presentNode->left = leftNode;
        presentNode->right = rightNode;
    }
}

void getVerticalOrder(Node *root, int hd, map<int, vector<int>> &m)
{
    if (root == NULL)
        return;

    m[hd].push_back(root->val);

    getVerticalOrder(root->left, hd - 1, m);

    getVerticalOrder(root->right, hd + 1, m);
}

void printVerticalOrder(Node *root)
{
    map<int, vector<int>> m;
    int hd = 0;
    getVerticalOrder(root, hd, m);

    map<int, vector<int>>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}

int main(void)
{
    Node *root = NULL;
    inputTree(root);

    printVerticalOrder(root);
}