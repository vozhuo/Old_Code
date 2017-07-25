#include<bits/stdc++.h>
using namespace std;

typedef struct LNode
{
    char data;
    struct LNode *prior;
    struct LNode *next;
} LNode, *LinkedList;

//���
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
//����ѭ������
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
            if(judge == 'U') { //����
                y = r->data;
                 cout<<y<<"+++"<<endl;
                delete r;//ɾ���ڵ�
            }
            if(judge == 'R') { //����

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
