#include<stdio.h>
#include "tree.h"

/**
 * 二叉树的删除 
 */
BTREE deleteTree(BTREE *T, int item)
{
    BTREE STACK[MaxStack], q, p = *T;
    int top = -1;
    if((*T)->data == item){
        // destroyBT(T);
        return NULL;
    } else {
        do{
            while(p != NULL){
                if(p->data == item){
                    if(q->lchild == p){
                        q->lchild = NULL;
                    } else {
                        q->rchild = NULL;
                    }
                    // destroy(T);
                    return T;
                }
                STACK[++top] = p;
                q = p;
                p = p->lchild;
            }
            p = STACK[top--];
            q = p;
            p = p->rchild;
        }while(! (p == NULL && top == -1) );
    }
}