#include<stdio.h>
#include<stdlib.h>
#include "tree.h"

/**
 * 建立一颗二叉树
 * @param 指向根节点的指针
 */
void createTree(BTREE *T, char *a){
    int num;

    scanf("%d",&num);

    if(num == 0){
        (*T) = NULL;//这棵树为空
    } else {
        /**
         * malloc 函数返回一个地址
         * 这个地址是一个结构体的地址
         * 应当被保存在指针变量中
         * (*T)此时，就是这个指向结构体变量的指针，
         */
        (*T) = (BTNode *)malloc(LEN); 

        (*T)->data = num;
        printf("newnode is%d\n",num);
        /**
         * warning: comparison between pointer and integer
         * 将整型和指针作比较
         */
        while(*a != "\0"){
            printf("output a %c",*(a++));
        }
        // printf("out put a is%c",*a);
        // if(*a == "\0"){
        //     printf("a is null");
        //     strcpy(a,"root");
        // }
        printf("from %s\n",a);


        createTree(&(*T)->lchild, "left");
        createTree(&(*T)->rchild, "right"); 
    }
}
