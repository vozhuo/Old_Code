#include <cstdio>
#include <iostream>
//#include <stdlib.h>
typedef int datatype;  //元素类型

typedef struct node
{
    datatype key;
    node *lchild, *rchild;
}Node, *BTree;  //节点、指针类型

BTree BT;

void InitBT(Node * &p, int data)
{
    if(p == NULL)
    {
        p = new Node;
        p -> key = data;
        p -> lchild = p -> rchild = NULL;
    }
    else
    {
        if(data < p -> key)
            InitBT(p -> lchild, data);
        else
            InitBT(p -> rchild, data);
    }
}

bool first = true;
void middle_order(BTree p)
{
    if(p)
    {
        middle_order(p -> lchild);

        if(first)
            printf("%d", p -> key);
        else
            printf(" %d", p -> key);
        first = false;

        middle_order(p -> rchild);
    }
}

int DelNode(BTree & p)
{
    BTree q, t;
    if(!p -> lchild && !p -> rchild) p = NULL;
    else if(!p -> lchild)
    {
        q = p;
        p = p -> rchild;
        free(q);
    }
    else if(!p -> rchild)
    {
        q = p;
        p = p -> lchild;
        free(q);
    }
    else
    {
        q = p;
        t = p -> lchild;
        while(t -> rchild)
        {
            q = t;
            t = t ->rchild;
        }
        p -> key = t ->key;
        if(q != p) q->rchild = t->lchild;
        else q->lchild = t->lchild;
        free(t);
    }
}

void print()
{
    middle_order(BT);
    printf("\n");
    first = true;
}

int del_tree(BTree & p, int data)
{
    if(p == NULL)
        printf("%d doesn't exist\n", data);
    else
    {
        if(p -> key == data)
        {
           DelNode(p);
           print();
        }
        else if(data < p -> key)
            return del_tree(p -> lchild, data);
        else
            return del_tree(p -> rchild, data);
    }
}

int main()
{
    int n, q, x, data;
    while(~scanf("%d%d", &n, &q))
    {
        BT = NULL;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &data);
            InitBT(BT, data);
        }
        print();
        while(q--)
        {
            scanf("%d", &x);
            del_tree(BT, x);
        }
    }
}
