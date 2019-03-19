#include<stdio.h>

/**
 * 宏定义部分
 */
#define LEN sizeof(BTNode)
#define MaxStack 50

/**
 * 结构体定义部分
 */
typedef struct node {
    int data;
    struct node *lchild, *rchild;
}BTNode, *BTREE;

/**
 * 函数声明部分
 */

/**
 * 创建
 */
void createTree(BTREE *, char *a);

/**
 * 遍历
 */
void preOrder(BTREE);
void inOrder(BTREE);
void postOrder(BTREE);
void nonInOrder(BTREE T);
