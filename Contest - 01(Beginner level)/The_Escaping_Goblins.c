//https://www.hackerrank.com/contests/ycpc-by-phitron-1st-round-beginner-level-contest-1-2024-1/challenges/the-escaping-goblins
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int k; 
    scanf("%d", &k);
    int diff = a-b;
    if(diff<0){
        diff = diff * -1;
    }
    if(diff>k){
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}