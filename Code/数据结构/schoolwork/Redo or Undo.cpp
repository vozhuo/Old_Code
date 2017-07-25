#include<bits/stdc++.h>
using namespace std;

typedef struct LNode
{
    char data;
    struct LNode *prior;
    struct LNode *next;
} LNode, *LinkedList;

//输出
void Print(LinkedList L)
{
    LinkedList p = L->next;

    while(p)
    {
        cout << p->data;
        p = p->next;
    }
    cout << endl;
}
//输入循环链表
void Create(LinkedList & L)
{
    LinkedList p, r, q;
    char judge, x, y;
    L = new LNode;
    L->next = NULL;
    r = L;
    r->next = NULL;

    while(true)
    {
        p = new LNode;
        cin >> x;
        if(x != '#')
        {
            p->data = x;
            p->prior = r->next;
            r->next = p;
            r = p;
        } else {
            cin >> judge;
            if(judge == '#') {
                break;
            }
            if(judge == 'U') { //撤销
                y = r->data;
                 cout<<y<<"+++"<<endl;
                delete r;//删除节点
            }
            if(judge == 'R') { //重做

                p->data = y;
                p->prior = r->next;
                r->next = p;
                r = p;

                r->next = NULL;
                Print(L);
            }
        }
    }
}

int main()
{
    LinkedList A;
    int t;
    cin >> t;

    while(t--)
        Create(A);
}
