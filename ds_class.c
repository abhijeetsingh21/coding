#include<stdio.h>
#include<stdlib.h>
// int main()
// {
//    int *ptr,i,n;
//    scanf("%d",&n);
//    ptr=(int*)malloc(n*sizeof(int));
//    ptr[0]=0;
//    ptr[1]=1;
//    printf("%d %d ",ptr[0],ptr[1]);
//    for(i=2;i<n;i++)
//    {
//        ptr[i]=ptr[i-1]+ptr[i-2];
//    }
//    for(i=2;i<n;i++)
//    printf("%d ",ptr[i]);
    
//     return 0;
// } 
// int main()
// {
//     int i,x;
//     int a[10]={53,64,23,76,45,35,88,43,97,56};
//     scanf("%d",&x);
//     for(i=0;i<=10;i++)
//     {
//         if (a[i]==x){
//         printf("%d is found at location %d\n",x, i+1);
//         break;
//         }
//         else if (i==10)
//         printf("not found\n");
//     }
//         return 0;
// }
// int main()
// {
//    int x;
//    scanf("%d",&x);
//    while(x--)
//    {
//        int m,n,j;
//        scanf("%d %d",&m,&n);
//        for (j=m;j<=n;j++)
//        {
//            if (j>1)
//            {
//                int flag=0;
//                for (int k=2;k<=j/2;j++)
//                {
//                    if (j%k==0)
//                    {
//                        flag=1;
//                        break;
//                    }
//                }
//                 if (flag==0)
//                 printf("%d\n",j);
//            }
//        }
//    }
//    return 0; 
// }

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int count=0,n;
//         scanf("%d",&n);
//         for(int i=0;i<n;i++)
//         {
//             int x;
//             scanf("%d",&x);
//             if (x%2!=0)
//             count++;
//         }
//         if (count%2!=0)
//         count--;
//         printf("%d\n",count/2);
//     }
// }

/*
int swap(int *l,int *t )
{
    int temp=*l;
    *l = *t;
    *t=temp;
    return 0;
}
int main()
{
    int arr[]={2,34,53,234,52,67,88,634,424,314,688,990,600,42,357,908,50,23,76,90,54,77,89,100,457,234,664};
    int i,j,k,n;
    n=sizeof(arr)/sizeof(arr[1]);
    for (i=0;i<n;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if (arr[j]<arr[k])
            {
                k=j;
            }
        }
            swap(&arr[k],&arr[i]);

    }
    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return(0);
}

*/

/*  leap year or not 

int main()
{
    int n;
    scanf("%d",&n);
    if (n%400==0 && n%100==0 && n%4==0)
    printf("leap year\n");
    else 
    printf("not a leap year\n");
    return 0 ;
}
*/

/* ternary operators 


int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",x<10?printf("no. is less than 10"):printf("greater than 10\n"));
    return 0;

}
*/


  /****    swap call by value 




int swap(int x,int y)
{
   int temp=x;
        x=y;
        y=temp;
    printf("%d %d",x,y);
    return 0 ;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
   
    return 0 ;

}

*/

// int swap(int *x,int *y)
// {
//    int temp=*x;
//         *x=*y;
//         *y=temp;
//     printf("%d %d",*x,*y);
//     return 0 ;
// }


// int part(int arr[],int l,int h)
// {
//     int piv=arr[l];
//     int i=l,j=h;

//     do{
//         do{i++;}while(arr[i]<=piv);
//         do{j--;}while(arr[j]>piv);
//         if (i<j)swap(&arr[i], &arr[j]);
//     }
//     while(i<j);

//     swap(&arr[l],&arr[j]);
//     return j;
// }
// int sort(int arr[],int l,int h)
// {
//     int j;
//     if(h<h) {
//     j=part(arr,l,h);
//     sort(arr,l,j);
//     sort(arr,j+1,h);
//     }
//     return 0;
// }

// int main()
// {
//     int arr[]={2,34,53,234,52,67,88,634,424,314,688,990,600,42,357,908,50,23,76,90,54,77,89,100,457,234,664};

//     int n=sizeof(arr)/sizeof(arr[1]);
//     sort(arr,0,n);
//     for (int i=0;i<n;i++)
//     printf("%d ",arr[i]);
//     printf("\n");
//     return 0 ;
    

// }


// int partition(int a[],int p , int r)
// {
//     int x,i,j;
//     x=a[r];
//     i=p-1;
//     for(j=p;j<=r-1;j++)
//     {
//         if (a[j]<=x)
//         {
//             i+=1;
//             swap(&a[i],&a[j]);
//         }
//     }
//     swap(&a[i+1],&a[r]);
//     return i+1;

// }


// int quicksort(int a[],int p , int r)
// {
//     int q;
//     if (p<r)
//     {
//         q=partition(a,p,r);
//         quicksort(a,p,q-1);
//         quicksort(a,q+1,r);
//     }
//     return 0;
// }

// int main()
// {
//     int n,p=0,r,i;
//     int a[]={2,34,53,234,52,67,88,634,424,314,688,990,600,42,357,908,50,23,76,90,54,77,89,100,457,234,664};
//     n=sizeof(a)/sizeof(a[1]);
//     quicksort(a,p,n-1);
//     printf("sorted Array is \n");
//     for (i=0;i<n;i++)
//     printf("%d ",a[i]);
//     return 0 ;
// }



// int main()
// {
//     int a[3][3],i,j;
//     for(i=0;i<3;i++)
//         for (j=0;j<3;j++)
//             scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         printf("%d ",a[i][j]); 
//         printf("\n");

//     }
//     return 0;
// }


// int main()
// {
//     int a[3][3],i,j,b[3][3],c[3][3];
//     for(i=0;i<3;i++)
//         for (j=0;j<3;j++)
//             scanf("%d",&a[i][j]);
//     for(i=0;i<3;i++)
//         for (j=0;j<3;j++)
//             scanf("%d",&b[i][j]);

//     for(i=0;i<3;i++)
//         for (j=0;j<3;j++)
//         c[i][j] = a[i][j]+b[i][j];

//      for(i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         printf("%d ",c[i][j]); 
//         printf("\n");
//     }

//     return 0;
// }


// int main()
// {
//     int arr1[3][3]={12,32,34,3,23,33,23,32,14};
//     int arr2[3][3]={83,2,13,54,34,23,23,53,4};
//     int i,j,k,product[3][3];
//     int sum=0;
//     for (i=0;i<3;i++)
//     {
//         for (j=0;j<3;j++)
//         {
//             for (k=0;k<3;k++){
//                 sum+=arr1[i][k]*arr2[k][j];
//             }
//         product[i][j] = sum;
//         sum = 0;
//         printf("%d ",product[i][j]);    
//         }
//         printf("\n");
        
//     }   
//     return 0;   
// }


int main()
{
    struct student
    {
        char *name;
        int roll_no;
        char *sub;

    }; 
    struct student st1[5];
    st1[1].name = "Abhijeet singh";
    st1[1].roll_no = 03;
    st1[1].sub = "eng";
    printf("%s\n",st1[1].name);
    printf("%d\n",st1[1].roll_no);
    printf("%s\n",st1[1].sub);

    printf("\n");
    
    // scanf("%c ",st1[2]->name);
    // // st1[2].roll_no = 01;
    // // st1[2].sub = "eng";


    st1[2].name = "Ranjeet singh";  
    st1[2].roll_no = 01;
    st1[2].sub = "eng";
    printf("%s\n",st1[2].name);
    printf("%d\n",st1[2].roll_no);
    printf("%s\n",st1[2].sub);
    

    st1[0].name = "Baljeet singh"; 
    st1[0].roll_no = 02;
    st1[0].sub = "maths";
    printf("%s\n",st1[0].name);
    printf("%d\n",st1[0].roll_no);
    printf("%s\n",st1[0].sub);
     




    return 0;

}

