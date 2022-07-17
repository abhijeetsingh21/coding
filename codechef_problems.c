#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*  ##########################  1.(add two numbers)    ############
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int add = x+y;
    printf("%d\n",add);
    return 0;
}
*/
/*    ##########################     2. (aggregrate marks)    ##################3
int  main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    scanf("%d ",&arr[i]);
    int sum=0;
    for(i=0;i<5;i++)
    sum+=arr[i];    
    float per=100*sum/500;
    printf("aggregrate marks = %d\n",sum);
    printf("%.2f",per);
    return 0;

}
*/
/* ################   3. (AREA AND PERIMETER)    ###########################

int main() 
{
    int l,b;
    scanf("%d %d",&l,&b);
    int area,per;
    area=l*b;
    per=2*(l+b);
    printf("area = %d\nper = %d",arae,per);
    return 0;

}
*/
/*  ###############  3.(SIMPLE INTEREST) ###############
int main()
{
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    float si=p*r*t/100;
    printf("%.2f",si);
    return 0;
}
*/
/* ################## 4.(larger number)  #####################3

int main()
{
    int x,j;
    scanf("%d %d",&x,&y);
    if (x>y)
    printf("%d\n",x);
    else
    printf("%d\n",y);
    return 0;

}

*/
/*   #############    5.(PRIME number)  #################*/

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

/*  ############ 6.(DAYS OF WEEK) ################

int main()
{
    int x;
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("sunday\n");    
        break;
    case 2:
        printf("monday\n");
        break;
    case 3:
        printf("tuesday\n");
        break;
    case 4:
        printf("wednesday\n");          
        break;
    case 5:
        printf("thursday\n") ; 
        break;
    case 6:
        printf("friday\n") ; 
        break;
    case 7:
        printf("saturday\n") ;
        break;

    default:
        printf("not a correct entery\n");
        break;
    }
    return 0;
}

*/
/*  ########### 7.(GREATEST OF 10 NUMBERS) ########3

int main()
{
    int i,arr[10],x;
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }

    printf("%d",arr[9]);
    return 0;

    
}
*/
/*  ##############  8.(SIMPLE CALCULATOR)  ####################
int main()
{
    char c;
    scanf("%c",&c);
    int x,y;
    scanf("%d %d",&x,&y);
    switch (c)
    {
        case '+':
        printf("%d",x+y);
        break ;
        case '*':
        printf("%d",x*y);
        break;
        case '/':
        printf("%d",x/y);
        break;
        case '-':
        printf("%d",x-y);
        break;
        default :
        printf("invalid input");


    }
    return 0;


}
*/
/* ###############  9.(FACTORIAL OF A NUMBER)  ##################

int main()
{
    int x,i,fact=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    fact*=i;
    printf("%d\n",fact);
    return 0;
}

*/
/*  #################### 10.(FIBONACCI NUMBER)  ##########################

int main()
{
    int n,a =0,b=1,sum;
    int i;
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return 0;

}
*/

/*  #############  11.(SUM OF N NUMBERS) ########################

int main()
{
    int x,i,sum=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    sum+=i;
    printf("%d\n",sum);
    return 0;
}

*/
/*   ################## 12.(EVEN NUMBERS FROM 2 TO 100)  ##########################

int main()
{
    int i;
    for(i=2;i<=100;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}

*/

/*   #################3   13.(DRAWING PATTERN)  ###############

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        printf(" ");
        for (int k=1;k<=i;k++)
        printf(" # ");
        printf("\n");
    }    
    return 0;
}

*/
/*  ############## 14.(FACTORIAL USING FUNCTION)  #################

int fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
}

int fact(int n)
{
    int fac=1,i;
    for(i=1;i<=n;i++)
    fac*=i;
    return fac;
}

*/

/*   ##################  15.(SWAP TWO NUMBERS)  ################

int swap(int x,int y);
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",swap(a,b));

}
int swap(int x, int y)
{
    int j;
    j=x;
    x=y;
    y=j;
    printf("%d %d\n",x,y);
    return 0;

}
*/
/*  ###################  16.(FACTOIRAL USING RECURSION)  #######################


int fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int f)
{   
    if (f>1)
    return f*fact(f-1);
    else
    return 1;

}
*/

/*  ###################  17.(SUM OF TWO MATRICS)  #################

int main() 
{
    int i ,j,k,sum;
    int a[10][10],b[10][10],c[10][10];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = a[i][j] + b[i][j];
           
            c[i][j]=sum; 
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    return 0;
    
}
*/
/* ##################  18.(MULTIPLICATION OF MATRICS) ##############

int main() 
{
    int i ,j,k,sum=0;
    int a[10][10],b[10][10],c[10][10];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        scanf("%d",&b[i][j]);
        }
    }
    // Multiplication of two matrices
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = 0;
            for (k=0;k<3;k++)
           {
             sum = sum +a[i][k] * b[k][j];
           }
            c[i][j]=sum; 
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++){
        printf(" %d ",c[i][j]);
    }
    printf("\n");
    }
    return 0;
    


}
*/
/*  #################  19.(PRINTING ADDRESS OF VARIABLES) ##################

int main ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%p %p",&a,&b);
    return 0;
}
*/
/*   ##################  20.(PRINTING ELEMENTS OF ARRAY USING POINTERS)  ################

int print(int *arr);
int main()
{
    int arr[5];
    for (int i =0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("%d",print(arr));
    return 0;
}
int print(int *arr)
{
    int j;
    for (j=0;j<5;j++)
    printf("%d ",arr[j]);
    return 0;
}
*/

 /*   ###################  21.(PALINDROME OR NOT)  #####################

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
 */
/*  #############  READING STRING FROM TERMINIAL #############

int main()
{
    char x[30];
    scanf("%[^\n]s",x);
    printf("%s",x);
    return 0;
}
*/
/*
int main()
{
    char s[10];
    char 
    scanf("%c",s);
    stringcpy()   
}
*/
// int main()
// {
//     int x,y;
//     scanf("%d %d",&x, &y);
//     printf("add %d\n",x+y);
//     printf("sub %d\n",x-y);
//     printf("mul %d\n",x*y);
//     return 0;
// }

// int main()
// {
//     int p,r,t;
//     scanf("%d %d %d",&p,&r,&t);
//     printf("%d\n",(p*r*t)/100);
//     return 0;
// }

// int main()
// {
//     int a[3][3] ,i,j;
//     int b[3][3];
//     int sum[3][3];
//     for(i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         scanf("%d",&a[i][j]);
//     }
//     for(i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         scanf("%d",&b[i][j]);
//     }
//     for (i=0;i<3;i++)
//     {
//         for (j<0;j<3;j++)
//             sum[i][j]=a[i][j]+b[i][j];
//     }
//     for(i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         printf("%d ",sum[i][j]);
//         printf("\n");
//     }
//         return 0;
    // }