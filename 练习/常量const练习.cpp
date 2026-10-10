#include <stdio.h>
#include <math.h>

int main(){
    const float PI = 3.1415;
    float s;
    s= PI * pow(2,2);
    printf("半径为2的圆面积为:%.2f\n",s);
    s= PI * pow(8,2);
    printf("半径为8的圆面积为:%.2f\n",s);
    
    return 0 ;
}