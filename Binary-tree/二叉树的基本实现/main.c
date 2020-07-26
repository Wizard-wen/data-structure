#include<stdio.h>
#include<stdlib.h>
#include "tree.h"
/**
 * 说明
 * 工程化后，使用gcc编译格式如下
 *      gcc main.c visitTree.c createTree.c -o main
 * 编译完成后，执行 
 *      ./main
 */

int main(){
    BTNode *tree; //定义tree为指向结构体的指针变量

    /**
     * @param 创建二叉树的参数是指针变量
     *  这个指针变量没有被赋予初值
     *  传递进去的是指向“指向tree结构体”的指针变量
     *  因为函数参数采用值传递的方式，因此，这样可以在函数中改变指向结构体的指针变量的值，并作用到函数外部
     */
    createTree(&tree, "");
    
    printf("next visit the tree\n");

    // preOrder(tree);
    nonInOrder(tree);

    return 1;
}
/**
 * .\main.c:23:2: warning: no newline at end of file
 * 解决： 在最后敲一个回车就可以了
 */
