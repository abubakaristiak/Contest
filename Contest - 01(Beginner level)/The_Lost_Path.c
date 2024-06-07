//https://www.hackerrank.com/contests/ycpc-by-phitron-1st-round-beginner-level-contest-1-2024-1/challenges/the-lost-path
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(b !=0){
        int value = a%b;
        printf("%d", value);
    }
    else{
        printf("-1");
    }
    return 0;
}