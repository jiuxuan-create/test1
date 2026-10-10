#include <stdio.h>

int main (){
    printf ("我将打印题目要求的偶数。\n");
    for (int i = 1 ; i <= 50 ;i=i+1) {
        if (i % 2 == 0 && i % 3 !=0 ){
            printf("%d\n",i );
        }
        if (i > 40){

            break;
        }
        



    }
    
    
    





    return 0 ;
}