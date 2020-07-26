#include<stdio.h>
#define MaxN 100
/**
 * Q 已知非空二叉树采用顺序存储结构，节点的数据信息依次村的防御数组BT[0..M]中
 * (假设结点的数据信息为整型数，若数组元素为0，则表示该元素对应的节点在二叉树中不存在)
 * 请写出二叉树前序遍历的非递归算法
 */

int main(){
    int data[] = {1,2,3,0,0,6,0};
    int max = 7;
    //声明函数
    void showTree(int[], int max);
    showTree(data,max);
    return 1;
}

void showTree(int BT[], int M){
    int stack[MaxN], //定义一个栈
        i,
        top = -1;//栈顶为空
    i = 0;
    do{
        while(i < M && BT[i] != 0){
            //打印结点     
            printf("%d\n",BT[i]);
            //入栈
            stack[++top] = i;
            /**
             * 索引值从0开始
             * 改变i的操作实际上是在换行
             */
            i = i*2 + 1;
        }//左子树为空，跳出循环，此时，栈顶元素为最后遍历的元素
        /**
         * 取栈顶元素，
         * 删除栈顶元素
         */
        i = stack[top--];
        //此时i是最后遍历的元素的右子树
        i = i*2+2;
    }while(!((i == M || BT[i] == 0) && top < 0)  );
    //条件是 !(i不溢出 || 元素不为0 && 栈不空)
}