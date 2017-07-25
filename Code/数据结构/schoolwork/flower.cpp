#include<bits/stdc++.h>
using namespace std;

typedef struct LNode
{
    int num;
    int data;
    struct LNode * next;
} LNode, *LinkedList;

void CreateLinkedList(LinkedList & L, int n)
{
    LinkedList p, q;
    L = new LNode;
    p = L;

    for(int i = 1; i <= n; i++)
    {
        q = new LNode;
        cin >> q->data;
        q->num = i;
        p->next = q;
        p = q;
    }
    p ->next = L->next;
}

void Output(LinkedList L, int m)
{
    int sum = 0, j;
    LinkedList p, q;
    p = L;
    p = p->next;

    while(true)
    {
        j = p->data - 1;
        while(j--)
            p = p -> next;

        q = p -> next;
        p -> next = q -> next;
        sum++;

        if(sum != m - 1)
            cout << q->num << " ";
        else
            cout << q->num;
        free(q);
        p = p->next;

        if(sum == m - 1)
            break;
    }
}

int main()
{
    LinkedList A;
    int n, m;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> m;
        cout << "Case #" << i << ":" << endl;

        CreateLinkedList(A, m);
        if(m == 1)
        {
          //  cout << "1";
            if(i != n) cout << endl;
        }
        else
        {
            Output(A, m);
            if(i != n)
                cout << endl;
        }
    }
}
