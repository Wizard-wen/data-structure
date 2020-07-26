#include<stdio.h>

#define LEN sizeof(Lnode)

typedef struct Node{
    int data;
    struct Node *next;
} Lnode;

int n;

int main()
{

}

Lnode * create()
{
    Lnode *head, *p1, *p2;
    p1 = (Lnode *)malloc(LEN);//
    scanf("%d",&p1->data);
    head = NULL;
    while(p1->data != 0)
    {
        n = n+1;
        //判断是不是头指针
        if(n == 1){
            head = p1;
        } else {
            p2 = p1;
        }
        p1 = (Lnode *)malloc(LEN);
        scanf("%d",&p1->data);
        p2 ->next = p1;
    }//while
    p2->next = NULL;
    return (head);
}