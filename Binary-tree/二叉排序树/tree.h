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


BTREE sortTree(int[], int);
void sortInsert(BTREE *, int);
//查找
BTREE searchSortTree(BTREE, int); //非递归算法
BTREE searchBST(BTREE, int);//递归算法