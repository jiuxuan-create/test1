#include <stdio.h>

int main(){
    int shu;
    scanf("%d",&shu);
    int gewei   = shu % 10;        // 个位
    int shiwei  = shu / 10 % 10;   // 十位
    int qianwei = shu / 1000 % 10; // 千位
    int wanwei  = shu / 10000 % 10;// 万位
    if ( gewei == wanwei && shiwei == qianwei)
    {
        printf("this number is a huiwen");
    }else
    {
        printf("this number is  not a huiwen");
    }





    return 0 ;
}
