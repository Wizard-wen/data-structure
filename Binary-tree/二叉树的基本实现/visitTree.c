#include<stdio.h>
#include "tree.h"

/**
 * 前序遍历
 */
void preOrder(BTREE T){
    if(T != NULL){
        printf("%d\n",T->data);
        preOrder(T->lchild);
        preOrder(T->rchild);
    } else {
        printf("the tree is null");
    }
}

/**
 * 中序遍历
 */
void inOrder(BTREE T){
    if(T != NULL){
        inOrder(T->lchild);
        printf("%d",T->data);
        inOrder(T->rchild);
    } else {
        printf("the tree is null");
    }
}

/**
 * 后序遍历
 */
void postOrder(BTREE T){
    if(T != NULL){
        postOrder(T->lchild);
        postOrder(T->rchild);
        printf("%d",T->data);
        
    } else {
        printf("the tree is null");
    }
}

/**
 * 中序遍历(非递归)
 * recursive 递归
 * non-recursive 非递归
 */
void nonInOrder(BTREE T){
    /**
     * 创建一个栈
     */
    BTREE STACK[MaxStack], p = T;

    int top = -1; //top为栈顶标志位
    
    if(T!=NULL){
        do{
            /**
             * 中序遍历
             * p所指结点不为空时，将该节点进栈
             * 然后再将p指向该节点的左孩子结点
             * 若左孩子节点为空，这是个叶节点，不再进栈，将栈顶元素退出，并访问该节点
             * 然后再讲p指向右孩子节点
             * 此时，右孩子结点重新成为一个新的根节点，从而执行新的循环
             */
            while(p != NULL){
                STACK[++top] = p; // top先自加再将p入栈
                p = p->lchild;
            };
            p = STACK[top--]; //取栈顶元素后，推栈
            printf("%d\n",p->data);//输出结点
            p = p->rchild;//指向右孩子
        }while( !(p == NULL&&top == -1));// 若p为空 且 栈为空 退出循环
    }
}

/**
 * 后序遍历(recursive)
 */

void nonPostOrder(BTREE *T){
    /**
     * STACK1 存放结点的地址
     * STACK2 存放相应标志flag的值
     */
    BTREE STACK1[MaxStack],//
          p = *T; //
    int STACK2[MaxStack], 
        flag, 
        top = -1;

    if(T != NULL){
        do{
            //一直走到最左边
            while(p != NULL){
                STACK1[++top] = p;
                STACK2[top] = 0;
                p = p->lchild;
            }
            p = STACK1[top];
            flag = STACK2[top--];
            if(flag == 0){
                STACK1[++top] = p;
                STACK2[top] = 1;
                p = p->rchild;
            } else {
                printf("%d",p->data);
                p = NULL;
            }
        }while(!( p  == NULL && top = -1));
    }
}
