#include<stdio.h>
int main()
{
    int a[] = {49,38,65,97,76,13,27};
    int n = 7;
    //声明函数
    void insert(int*,int);
    //执行函数，传入数组名
    insert(a,n);
    
    int *p = a;
    while(p < a+7){
        printf("%d\n",*p);
        p++;
    };
    return 0;
}

void insert(int *k, int n)
{
    int i, j;
    int temp;
    for(i = 1; i<n;i++){
        temp = *(k+i);
        j = i-1;
        while(j>=0 &&temp < *(k+j)){
            *(k+j+1) = *(k+j--);
        }
        *(k+j+1) = temp;   
    }
}
void insert2(int k[], int n)
{
    int i, j;
    int temp;
    for(i = 1; i<n;i++){
        temp = k[i];
        j = i-1;
        while(j>=0 &&temp < k[j]){
            k[j+1] =k[j--];
        }
        k[j+1] = temp;   
    }
}