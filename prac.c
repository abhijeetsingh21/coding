#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j ;
    printf("Enter the number of rows you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) 
        {
        if (i==(n+1)/2 ||  j==(n+1)/2)
        printf("# ");
        else 
        printf("  ");
        }    
    printf("\n");
        
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) 
        {
        if (i==j)
        printf("# ");
        else 
        printf("0 ");
        }    
    printf("\n");
        
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) 
        {
        if (i==n ||  j==n || i==1 || j== 1)
        printf("# ");
        else 
        printf("  ");
        }    
    printf("\n");
        
    }

       return 0;
} 