#include <stdio.h>
int main (){
    int arr[5];

    printf("请分五次逐一输入5个整数：\n");
    for (int i = 0; i<5; i= i+1){
        scanf("%d",&arr[i]);

    }
    printf("输入完毕!\n");
    
    for(int i = 0; i  <5;i = i +1){
        printf("%d",arr[i ]);
        printf(",");

    }


    return 0 ;
}