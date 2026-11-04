#include <stdio.h>
int main(){
    int a = 1, b = 1;
    printf("%d %d ", a, b);          // 先打印前两个 1 1

    for (int i = 3; i <= 10; i++)    // 再算第 3 到第 10 个
    {
        int c = a + b;               // 新数 = 前两个之和
        printf("%d ", c);
        a = b;                       // a 挪到原来的 b
        b = c;                       // b 挪到刚算出的新数
    }
    return 0;
}
