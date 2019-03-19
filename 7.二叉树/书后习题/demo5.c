#include<stdio.h>
#include<malloc.h>

/**
 * Q已知二叉树采用二叉链表存储结构，根节点的地址为T。
 * 请写一递归算法，统计出该二叉树中度为1的结点的数目。
 * 要求：算法中用到的堆栈采用链式存储结构。
 */



//tree结点
typedef struct treeNode{
    int data;
    struct treeNode *lchild, *rchild;
}BTNode, *BTREE;

//stack结点
typedef struct stackNode{
    BTREE data;
    struct stackNode *link;
}BLNode, *BLinkList;
int main(){
    return 1;
}
int count(BTREE T){
    BTREE p = T;
    BLinkList q, top = NULL; //栈
    int n = 0;
    if(T != NULL){
        do{
            while(p!=NULL){
                if(p -> lchild != NULL && p->rchild != NULL || p -> rchild != NULL && p-> lchild == NULL){
                    n++;
                }
                //为栈分配内存空间
                q = (BLinkList)malloc(sizeof(BLNode));
                
                q -> data = p;
                q -> link = top; //新的栈的指针域指向原来的top
                top = q;//q成为新的栈顶元素

                //p结点指向他的左孩子
                p = p-> lchild;
            }//左孩子为空，跳出循环
            //将栈顶元素赋给循环指针p
            p = top -> data;
            q = top;
            top = top -> link;
            free(q);
            p = p -> rchild;
        }while(!(p == NULL && top == NULL));
    }
    return n;
    
}

