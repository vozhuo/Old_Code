#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int i;
    struct Node *head,*p,*tmp;
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = 1;
    node->next = NULL;
    tmp = head = node;
    for(i = 2; i <=10; i++)
    {
        node = (struct Node *)malloc(sizeof(struct Node));
        node->data = i;
        node->next = NULL;
        tmp->next = node;
        tmp = node;
    }
    for(p = head; p != NULL; p = p->next)
        printf("%d ",p->data);
}
