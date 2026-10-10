#include <stdio.h>

int main(){
    int a,i ;
    printf("输入一个正整数 n\(n≥2\)\n");
    printf("请输入（Enter继续） :");
    scanf("%d",&a);
    int q= 0 ;

    for(i =2;i<= a; i++){
        if (i%2 == 0 && i%4 != 0){
            q=q+1   ; 
        }

    }
    printf("统计从2到n之间,能被2整除但是不能被4整除的数字\n");
    printf("%d个。\n",q);
//累死我算了:(
    return 0 ;
}