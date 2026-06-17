#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}
void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    Node *f = q.front();
    q.pop();
    if (f == NULL)
    {
        cout << endl;
    }
    if (!q.empty())
    {
        q.push(NULL);
    }
    else
    {
        cout << f->data << " ";
        if (f->left)
        {
            q.push(f->right);
        }
        if (f->right)
        {
            q.push(f->left);
        }
    }
}
int main()
{
    Node *root = buildTree();
    preorder(root);
    inorder(root);
    postorder(root);
}