#include<stdio.h>
#include "tree.h"

/**
 * Q判断二叉树是否为完全二叉树
 */

int iscomplete(BTREE T){
    BTREE QUEUE[NodeNum],p = T;
    int rear,front,
        flag = 1,
        comflag = 1;
    if(T!= NULL){
        QUEUE[0] = T;
        rear = 0;
        front = -1;
        while(front<rear){
            p = p = QUEUE[++front];
            if(p->lchild == NULL){
                flag = 0;
                if(p->rchild != NULL){
                    comflag = 0;
                }
            } else {
                comflag = flag;
                QUEUE[++rear] = p->lchild;
                if(p->rchild!=NULL)
                    QUEUE[++rear] = p->rchild;
                else 
                    flag = 0;
            }   
        }
    }
    return comflag;
}