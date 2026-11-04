#include <stdio.h>

int main(void){
    int a,b,c;
    int m,n ,result;
    printf("m:");
    scanf("%d",m);
    printf("n:");
    scanf("%d",n);
    for(int i =1 ; i<=n ; i++){
        n = i*n;


    }
    for(int i =1 ; i<=m ; i++){
        m = i*m;


    }
    c = n-m;
    for(int i =1 ; i<=c ; i++){
        c = i*c;


    }           

    result = (n/(m*c));
    printf("%d",result);


    return 0 ;
}