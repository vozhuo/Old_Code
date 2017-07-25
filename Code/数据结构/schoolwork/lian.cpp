#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode * next;
} LNode, *LinkedList;
//建立单链表
void CreateLinkedList(LinkedList & L, int n)
{
    LinkedList p, r;
    L = new LNode;
    L -> next = NULL;
    r = L;

    for(int i = 0; i < n; i++)
    {
        p = new LNode;
        cin >> p->data;
        p->next = NULL;
        r->next = p;
        r = p;
    }
}
//交集
void intersectLinkedList(LinkedList A, LinkedList B, LinkedList & C)
{
    LinkedList p, q, m, s;
    C = new LNode;
    C -> next = NULL;
    p = A->next;
    q = B->next;
    m = C;

    while(p)
    {
        while(q && p->data > q->data)
            q = q->next;

        if(q && p->data == q->data)
        {
            s = new LNode;
            s->data = p->data;
            s->next = m->next;
            m->next = s;
            m = s;
        }
        if(!q)
            return;

        p = p->next;
    }
}
//并集
void unionLinkedList(LinkedList A, LinkedList B, LinkedList & D)
{
    LinkedList p, q, m, s;
    D = new LNode;
    D -> next = NULL;
    p = A->next;
    q = B->next;
    m = D;

    while(p && q)
    {
        s = new LNode;

        if(p->data > q->data)
        {
            s->data = q->data;
            q = q->next;
        }
        else if(p->data < q->data)
            {
                s->data = p->data;
                p = p->next;
            }
        else
            {
                s->data = p->data;
                p = p->next;
                q = q->next;
            }

        s->next = m->next;
        m->next = s;
        m = s;
    }

    while(p)
    {
        s = new LNode;
        s->data = p -> data;
        p = p -> next;
        s -> next = m -> next;
        m -> next = s;
        m = s;
    }

    while(q)
    {
        s = new LNode;
        s->data = q -> data;
        q = q -> next;
        s -> next = m -> next;
        m -> next = s;
        m = s;
    }
}
//差集
void compleLinkedList(LinkedList A, LinkedList B, LinkedList & E, bool e)
{
    LinkedList p, q, m, s;
    E = new LNode;
    E->next = NULL;

    if(e == true)
    {
        p = A->next;
        q = B->next;
        m = E;

        while(p)
        {
            while(q && p->data > q->data)
                q = q->next;

            if(q && p->data == q->data)
                p = p->next;
            else
            {
                s = new LNode;
                s->data = p->data;
                s->next = m->next;
                m->next = s;
                m = s;
                p = p->next;
            }
        }
    }
    else
    {
        q = A->next;
        p = B->next;
        m = E;

        while(p)
        {
            while(q && p->data > q->data)
                q = q->next;

            if(q && p->data == q->data)
                p = p->next;
            else
            {
                s = new LNode;
                s->data = p->data;
                s->next = m->next;
                m->next = s;
                m = s;
                p = p->next;
            }
        }

    }
}
//输出
void printLinkedList(LinkedList L)
{
    LinkedList p = L->next;

    while(p)
    {
        if(p->next == NULL)
            cout<<p->data;
        else
            cout<<p->data<<" ";
        p = p->next;
    }
   // printf("\n");
}

int main()
{
    LinkedList A, B, C, D, E;
    int a, b, n;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        cin>>a; CreateLinkedList(A, a);
        cin>>b; CreateLinkedList(B, b);
//
       // cout << "Case #" << i << ":" << endl;
      //  bool e = true;

      //  intersectLinkedList(A, B, C);
      //  unionLinkedList(A, B, D);
     //   compleLinkedList(A, B, E, e);
        printLinkedList(A); cout << endl;
     //   printLinkedList(D); cout << endl;
     //   printLinkedList(E); cout << endl;
     //   e = false;
      //  compleLinkedList(A, B, E, e); printLinkedList(E); if(i != n) cout << endl;
        //  printLinkedList(A);
        //  printLinkedList(B);
    }
}
