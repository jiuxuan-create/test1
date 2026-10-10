#include <stdio.h>

int main () {
    for (int i = 1; i < 6; i++){
        for(int q = 1; q<=i ; q=q+1){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}