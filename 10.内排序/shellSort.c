#include<stdio.h>

/**
 * 希尔排序
 * 
 */
void shellSort(int k[], int n)
{
    /**
     * 1.gap 表示元素间间隔数
     *  gap通常首次取
     * flag 标志是否有交换动作
     */
    int i, j, flag, gap = n;
    int temp;
    while(gap > 1){
        gap = gap/2;
        do{
            flag = 0;
            for(i = 0; i <= n-gap; i++){
                j = i + gap;
                if(k[i] > k[j]){
                    temp = k[i];
                    k[i] = k[j];
                    k[j] = temp;
                    flag = 1;
                }
            }
        }while(flag != 0);
    }
}