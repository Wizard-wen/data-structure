#include<stdio.h>
#include<sys/malloc.h>
#include<stdlib.h>

#define LEN sizeof(struct student)
// #define NULL 0

typedef struct student{
    int data;
    struct student *next;
}LNode, *LinkList;

int main()
{
    LNode *p1;
    // p1 = (LinkList)malloc(LEN);
    p1 = (LNode *)malloc(LEN);


    scanf("%d",&p1->data);
    // p1->data  (*p1).data  这是等价的
    printf("the address of the data is %d\n",(*p1).data);
    //
    void create(LinkList *);
    create(&p1);
    printf("the new is %d\n",p1->data); 
    return 1;
}
/**
 * 创建一个返回链表头结点的函数
 */

// void create(LNode *head){
//     LNode *p = head,*p1,*p2;
//     int num, n = 0;
//     scanf("input a number %d",&num);
//     if(num == 0){
//         *head =NULL;
//         return;
//     }
//     while(num != 0){
//         p1 = (LNode *)malloc(LEN);
//         p2 = p1;
//         p1 = p1->next;
//         p2->next = p1;
//     }
// }

//注意，传递进来的是指向指针变量的指针
void create(LinkList *a){
    printf("out put %d\n",(*a)->data);
    LNode *p2 = (LinkList)malloc(LEN);
    scanf("%d",&p2->data);
    printf("p2 value is %d\n",p2->data);
    //*a实际上是指向结构体变量的指针
    *a = p2;
}