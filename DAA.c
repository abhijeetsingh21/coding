#include<stdio.h>
// int lar_ele();
// int sml_ele();
// int linear_search(int a);
// int binary_search();
int arr[10];
// int main()
// {
//     int search;
//     for(i=0;i<10;i++)
//         scanf("%d",&arr[i]);
//     for (i=0;i<10;i++)
//     printf("%d ",arr[i]);
//     printf("\n");
//     lar_ele();
//     sml_ele();
//     scanf("%d", &search);
    
//     linear_search(search);
//     binary_search(search);

    
//     return 0;
// }
// int lar_ele(){
//     int largest = arr[0];
//     for (i=1;i<10;i++)
//     {
//         if(largest<arr[i])
//         largest=arr[i];

//     }
//         printf("largest element is %d\n", largest);
//         return 0 ;
// }
// int sml_ele()
// {
//      int smallest = arr[0];
//     for (i=1;i<10;i++)
//     {
//         if(smallest>arr[i])
//         smallest=arr[i];

//     }
//     printf("smallest element is %d\n", smallest);
//     return 0 ;
// }
// int linear_search(int a){
    
//     for(i=0;i<10;i++)
//     {
//         if (arr[i]==a){
//         printf("element %d found at %d\n", a, i+1);
//         break;
//         }
//     }
//     return 0;
        
// }
// int binary_search(int a)
// {
//     int upper_bound,lower_bound,i,j,arr_length,mid_ele;
//     arr_length = sizeof(arr)/sizeof(arr[0]);
//     lower_bound = 0;
//     upper_bound = arr_length-1;

//     for(i=0;i<arr_length;i++)
//     mid_ele = (lower_bound+upper_bound)/2;
//     {
//         if (arr[mid_ele] == a)
//         {
//             printf("element %d found at %d \n",a,mid_ele+1);
//         }    
//         else if(arr[mid_ele] < a){
//             lower_bound = mid_ele + 1;
//         }
//         else{
//             upper_bound =mid_ele - 1;
//         }
//     }
//     return -1;


// }
//  ##############  Instrtion sort         ####

// int main(){
//     for (i=0;i<10;i++){
//         scanf("%d",&arr[i]);

//     }
//     for (i=0;i<10;i++){
//         for (j=0;j<10;j++){

//         if (arr[i]<arr[j]){
//             int temp =arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }

//     }
//     }
//     for (i=0;i<10;i++){
//         printf("%d ",arr[i]);

//     }


// }
// ////////////    Instertion sort   /////////////

// int main(){
//     int i,j,temp;
//     for (i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (i=1;i<10;i++){
//         for (j=i;j>0 && arr[j-1]>arr[j];j--){
//             temp = arr[j];
//             arr[j] = arr[j-1];
//             arr[j-1] = temp;

//     }

//     }

//     for (i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
    


// }

/////////////   Merging of arrays ///////////////

int main()
{
    int i;
    int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10};
    
    int arr3[10];
    
    for ( i = 0;i<10;i++){

        if (i<5){
            arr3[i] = arr1[i];
        }
        else{
            arr3[i] = arr2[i-5];
        }
    }

    for ( i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }

}

