#include <stdio.h> 
int main(void){    
    int n,i;        
    printf("请输入元素个数:");    
    scanf("%d",&n);    
    int arr[n];    // 变长数组，C99才支持
    printf("请依次输入元素（Enter在输入下一个）:");    
    for(i=0;i<n;i++){        
        scanf("%d",&arr[i]); 
    }    
    int *p = arr;         // p指向第一个元素
    int *q = arr+n-1 ;    // q指向最后一个元素
    int exchange; 
    while(p<q){           // 指针没有相遇就继续交换
        exchange = *p;    // *p 代表p指向的数据
        *p = *q;    
        *q = exchange;    
        p++;              // 头指针右移
        q--;              // 尾指针左移
    } 
    for (i = 0; i < n; i++){ 
        printf("%d ", arr[i]); 
    } 
    return 0; 
}
