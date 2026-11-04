#include <stdio.h>

// 你图片里的这个判断质数函数
int isPrime(int x)
{
    int ret = 1;
    int i;
    if ( x == 1 || (x%2 == 0 && x!=2) )
        ret = 0;
    for ( i=3; i<x; i+=2 ) {
        if ( x % i == 0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main( )
{
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    // ===== 使用isPrime：把数字放括号里 =====
    if ( isPrime(num) == 1 )
    {
        printf("%d 是质数\n", num);
    }
    else
    {
        printf("%d 不是质数\n", num);
    }

    return 0;
}
