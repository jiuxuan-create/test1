#include <stdio.h>
int main(void)
{
    int arr[10];
    int i, j, min_idx, temp;

    // 输入10个数字
    printf("请输入10个整数：");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 选择排序核心：从小到大
    for(i = 0; i < 9; i++)   // i是当前要放最小值的位置
    {
        min_idx = i;         // 先假设当前i位置是最小值下标
        // 从i后面开始找更小的数
        for(j = i + 1; j < 10; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;  // 更新最小值下标
            }
        }
        // 把最小的数交换到i的位置
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // 输出排序后的结果
    printf("排序后：");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

