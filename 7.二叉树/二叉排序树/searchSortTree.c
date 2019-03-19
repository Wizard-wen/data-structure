#include<stdio.h>
#include "tree.h"

/**
 * 二叉排序树查找算法(non-recursive)
 * @param T 根结点存储地址
 * @param item 待查找的数据元素
 */
BTREE searchSortTree(BTREE T, int item)
{
    BTREE p = T; //p为活动指针
    while(p != NULL){
        if(p->data == item){
            return p; //直接返回地址
        }
        /**
         * item < p->data 进入左子树
         * item >= p->data 进入右子树
         */
        if(item < p->data){
            p = p->lchild;
        } else {
            p = p->rchild;
        }
    }
    return NULL;
}
/**
 * 二叉排序树查找算法(recursive)
 * @param T 根结点存储地址
 * @param item 待查找的数据元素
 */
BTREE searchBST(BTREE T, int item)
{
    if(T == NULL)
        return NULL;
    if(T->data == item)
        return T;
    if(item < T->data)
        return searchBST(T->lchild, item);
    else 
        return searchBST(T->rchild, item);
}
/**
 * 递归与非递归的区别
 *  递归算法不使用循环
 *  非递归算法循环移动指针，查找
 */