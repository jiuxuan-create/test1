#include <stdio.h>
int main () {
    int i = 1;
    int result_1 = 0;
    int result_2 = 0;

    while (i <= 100) {
        if (i % 2 == 0){
            result_1 = result_1 + i   ; 
        }
        i = i+1;

    }
    printf("1到100中所有偶数的和为：%d\n",result_1);



    i =1;

    do {
        if (i %2 == 0){
            result_2 =result_2 + i ;

        }
        i = i+1;



    }while (i<=100);
    printf("1到100中所有偶数的和为：%d",result_2);
    

    



    return 0 ;
}