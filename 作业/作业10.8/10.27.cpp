#include <stdio.h>

int main(void){
    int n,i;
    
    printf("请输入元素个数:");
    scanf("%d",&n);
    int arr[n];
    printf("请依次输入元素（Enter在输入下一个）:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int *p = arr;
    int *q = arr+n-1 ;
    int exchange;

    while(p<q){
        exchange = *p;
        *p = *q;
        *q = exchange;
        p++;
        q--;        

    }


    for (i = 0; i < n; i++){

        printf("%d ", arr[i]);

    
    }

     return 0;
}    
