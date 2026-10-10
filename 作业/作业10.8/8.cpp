#include <stdio.h>

int main(){
    int a,b,c ;
    printf("输入年份、月份:\(中间用空格隔开\)");
    scanf("%d %d",&a,&b);
    switch(b){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
             printf("31天");
        break;
        case 2:
            
            if((a %4==0 && a %100!=0) || (a %400==0)){
                printf("29天");
            }
            else
                printf("28天");
            break;           
    default:
        printf("输入错误！");       
    }
    return 0 ;
}