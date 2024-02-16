#include<stdio.h>
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,key;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search:\n");
    scanf("%d",&key);
    int result=linearsearch(arr,n,key);
    if(result==-1){
        printf("elment not found in array\n");
    }
    else 
    {
        printf("element is at index %d\n",result);
    }
    return 0;
}
