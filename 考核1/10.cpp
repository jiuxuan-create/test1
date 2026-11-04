#include <stdio.h>
int main (){
    int i, j;
    int arr[9];

    for (i = 0; i < 9; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < 9; i++)
    {
        int flag = 1;                 // 先假设这个数没重复
        for (j = 0; j < i; j++)       // 跟前面的每个数比
        {
            if (arr[i] == arr[j])     // 前面出现过
            {
                flag = 0;             // 标记为重复
                break;                // 不用再比了
            }
        }
        if (flag)                      // 前面没出现过，才打印
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
