#include<stdio.h>
/**
 * Q已知二叉树采用二叉链表存储结构，根节点的地址为T。
 * 请写一递归算法，释放该二叉树中所有结点占用的空间
 */
typedef struct Node {
    int num;
    struct Node *lchild, *rchild;
}TreeNode;


int main(){

}
/**
 * 书后习题中形参T采用的是&T，据目前掌握的资料认为这是C++的写法
 */
void releaseTree(TreeNode *T){
    if(T != NULL){
        releaseTree(T -> lchild);
        releaseTree(T -> rchild);
        free(T);
    }
}

