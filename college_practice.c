#include<stdio.h>
int main()
{
    int x,p=0;
    scanf("%d",&x);
    for(int i=2;i<=x/2;i++)
    {
        if (x%i==0)
        {
            p=1;
            break;
        }
    }

    if (x==1)
    printf("not a prime no");
    else
    {
        if (p==0)
        printf("it is a prime number");
        else
        printf("not a prime number");
    }
}
