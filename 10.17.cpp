#include <stdio.h>

int main(){


    int sum[10];
    int i,j,min;
    int change;
    printf("输入10个数字：");
    for(i=0;i<10;i++){
        scanf("%d",&sum[i]);
    }
    for(i=0; i<9;i++){
        min = i;

        for(j=i+1;j<10;j++){
            if (sum[j]<sum[min])
            {

                min=j;
            }
        }
        change = sum[i];
        sum[i]=sum[min];
        sum[min]=change;
    }
        
    printf("结果:");
    for(i=0;i<10;i++){

        printf("%d ",sum[i]);
    }

    return 0 ;    
}    