#include <stdio.h>

int main(){
    int a,b,c;

    printf("请输入三个整数：\n");
    printf("\(中间分别用空格隔开\)\n");

    scanf("%d %d %d",&a,&b,&c);
    if(a > b){
        if(b > c)
            printf("%d",b);
        else
        {
            if(a > c)
                printf("%d",c);
            else
                printf("%d",a);
        }
    }
    else{
        if(a > c)
            printf("%d",a);
        else{
            if(b > c)
                printf("%d",c);
            else
                printf("%d",b);
        }
    }
    return 0;
}