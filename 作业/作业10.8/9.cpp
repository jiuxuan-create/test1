#include <stdio.h>
int main () {
    int i = 1;
    int result_1 = 0;

    while (i <= 100) {
        if (i % 3 != 0){
            result_1 = result_1 + i   ; 
        }
        i = i+1;
    }
    printf("1\-100 中所有不是3的倍数的数字总和为：%d\n",result_1);

    return 0 ;
}