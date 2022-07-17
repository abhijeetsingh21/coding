#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,*ptr;
        scanf("%d",&n);
        ptr=(int*)malloc(n*sizeof(int));
        for (i=0;i<n;i++)
            scanf("%d",ptr+i);
                printf("%d ",ptr);
    return 0;                   
}