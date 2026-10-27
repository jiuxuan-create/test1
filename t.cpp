#include <stdio.h>

int main(void){
    int n;
    int arr[100][100];
    int lenth[100];
    printf("输入有多少组数据：");
    scanf("%d",&n);

    for(int i = 0 ;i<n;i++){
        printf("输入第%d组的个数：",i+1);
        scanf("%d", &lenth[i]);
        printf("输入元素（Enter下一个）:");
        for (int j = 0; j < lenth[i]; j++){  

            scanf("%d", &arr[i][j]);    
        }
    }
    printf("结果：\n");
    for(int i = 0; i<n;i++){
        printf("第%d组",i+1);
        for(int j = 0; j<lenth[i];j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}