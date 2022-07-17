#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    printf("give a no. : ");
    scanf("%d",&N);
    int seen[100]={0};
    int rem;
    while(N>0)
    {
        rem = N%10;
        if (seen[rem]==1)
        break;
        seen[rem]=1;
        N = N/10;
    }
        if (N>0)
        printf("yes\n");
        else 
        printf("no\n");
        // free(seen);
    
    return 0;
} 