#include <stdio.h>

int main(){
    int arr[3][3];
    int ex ;
    int q ;
    printf("4x4 示例1 2 3 4（空格回车再输入3行）:\n");
    scanf("%d %d %d %d",&arr[0][0],&arr[0][1],&arr[0][2],&arr[0][3]);
    scanf("%d %d %d %d",&arr[1][0],&arr[1][1],&arr[1][2],&arr[1][3]);
    scanf("%d %d %d %d",&arr[2][0],&arr[2][1],&arr[2][2],&arr[2][3]);
    scanf("%d %d %d %d",&arr[3][0],&arr[3][1],&arr[3][2],&arr[3][3]);
    for (int i = 0; i < 4; i++)
    {
        q =arr[i][0];
        arr[i][0] = arr[0][i] ;
        arr[0][i] = q ;
    }
    ex = arr[1][2] ;
    arr[1][2] = arr[2][1];
    arr[2][1] = ex ;

    ex = arr[1][3] ;
    arr[1][3] = arr[3][1];
    arr[3][1] = ex ;

    ex = arr[2][3] ;
    arr[2][3] = arr[3][2];
    arr[3][2] = ex ;
    
    printf("%d %d %d %d",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
    printf("\n");
    printf("%d %d %d %d",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
    printf("\n");
    printf("%d %d %d %d",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
    printf("\n");
    printf("%d %d %d %d",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);  
    printf("\n"); 
    int sum1 = arr[0][0]+ arr[1][1] +arr[2][2]+ arr[3][3] ;
    int sum2 = arr[0][3]+ arr[1][2]+ arr[2][1]+ arr[3][0] ;
    printf("主对角线之和: %d+%d+%d+%d=%d",arr[0][0],arr[1][1],arr[2][2],arr[3][3],sum1); 
    printf("副对角线之和: %d+%d+%d+%d=%d",arr[3][0],arr[1][2],arr[2][1],arr[3][0],sum2);   





    return 0 ;
}
