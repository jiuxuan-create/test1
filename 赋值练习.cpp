#include <stdio.h>
int main() {
    int mike_score;
    int john_score;
    mike_score =89;
    john_score =98;
    printf("Mike的成绩是%d分。\n",mike_score);
    printf("John的成绩是%d分。\n",john_score);
    printf("更正后。\n");
    mike_score = john_score ;
    john_score = 89;
    printf("Mike的成绩是%d分。\n",mike_score);
    printf("John的成绩是%d分。\n",john_score);
    mike_score = 0;
    john_score = 1;
    printf("Mike是%d\n",mike_score);
    printf("John是%d",john_score);

    return 0;
}
