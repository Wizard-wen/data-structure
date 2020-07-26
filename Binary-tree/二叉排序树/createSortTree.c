#include<stdio.h>
#include "tree.h"

BTREE sortTree(int k[], int n)
{   
    BTREE T = NULL;
    int i;
    if(n > 0)
        for(i = 0;i < n; i++)
            sortInsert(&T, k[i]);
    return T;
}
/**
 * @param T 为指向“指向结点的指针”的指针
 */
void sortInsert(BTREE *T, int item)
{
    BTREE p, q;
    //开辟新地址
    p = (BTREE)malloc(LEN);
    //赋初值
    p -> data = item;
    p->lchild = NULL;
    p->rchild = NULL;
    
    //若T为空，则该结点为根结点
    if(*T == NULL)
        *T = p; //改变T的值
    else{
        q = *T;
        while(1){
            /**
             * 若item小于当前结点，放入左孩子结点继续比较
             * 否则，放入右孩子结点比较
             * 若没有左孩子或右孩子，则该结点变成当前结点的左孩子或右孩子
             */
            if(item < q->data){
                if(q->lchild != NULL){
                    q = q->lchild; //存在左孩子，放入左孩子继续比较
                } else {
                    q->lchild = p;
                    break;
                }
            } else {
                if(q->rchild != NULL){
                    q = q->rchild;//存在右孩子，放入右孩子中继续比较
                } else {
                    q->rchild = p;
                    break;
                }
            }
        }
    }

}