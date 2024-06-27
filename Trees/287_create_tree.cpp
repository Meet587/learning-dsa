#include <bits/stdc++.h>
#include "QueueCpp.h"

using namespace std;

class Tree
{
public:
    TreeNode *root;
    Tree() { root = NULL; };
    void CreateTree();
    void preOrder(TreeNode *p);
    void inOrder(TreeNode *p);
    void postOrder(TreeNode *p);
    void LevelOrder(TreeNode *p);
    int Height(TreeNode *root);
};

void Tree::CreateTree()
{
    TreeNode *p, *t;
    int x;

    Queue q(100);

    printf("Enter root value ");
    scanf("%d", &x);

    root = new TreeNode;
    root->data = x;
    root->lChild = root->rChild = NULL;
    q.enqueue(root);

    cout << "q.isEmpty() " << q.isEmpty() << endl;

    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("Enter left child value of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new TreeNode;
            t->data = x;
            t->lChild = t->rChild = NULL;
            p->lChild = t;
            q.enqueue(t);
        }
        printf("Enter right child value of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new TreeNode;
            t->data = x;
            t->lChild = t->rChild = NULL;
            p->rChild = t;
            q.enqueue(t);
        }
    }
}

void Tree::preOrder(struct TreeNode *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preOrder(p->lChild);
        preOrder(p->rChild);
    }
}

void Tree::inOrder(struct TreeNode *p)
{
    if (p)
    {
        inOrder(p->lChild);
        printf("%d ", p->data);
        inOrder(p->rChild);
    }
}

void Tree::postOrder(struct TreeNode *p)
{
    if (p)
    {
        postOrder(p->lChild);
        postOrder(p->rChild);
        printf("%d ", p->data);
    }
}

void Tree::LevelOrder(struct TreeNode *root)
{
    Queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lChild)
        {
            cout << root->lChild->data << " ";
            q.enqueue(root->lChild);
        }
        if (root->rChild)
        {
            cout << root->rChild->data << " ";
            q.enqueue(root->rChild);
        }
    }
}

int Tree::Height(struct TreeNode *root)
{
    int x = 0, y = 0;
    if (root == 0)
        return 0;
    x = Height(root->lChild);
    y = Height(root->rChild);

    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int main()
{
    Tree t;

    t.CreateTree();

    t.preOrder(t.root);
    cout << "\n";
    t.inOrder(t.root);
    cout << "\n";
    t.postOrder(t.root);
    cout << "\n";
    t.LevelOrder(t.root);
    cout << "\n";

    return 0;
}