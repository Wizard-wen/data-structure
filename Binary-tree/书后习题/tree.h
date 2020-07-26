#include<stdio.h>

/**
 * 宏定义部分
 */
#define LEN sizeof(BTNode)
#define MaxStack 50
#define NodeNum 50

/**
 * 结构体定义部分
 */
typedef struct node {
    int data;
    struct node *lchild, *rchild;
}BTNode, *BTREE;

//声明函数
void showTree(int[], int max);