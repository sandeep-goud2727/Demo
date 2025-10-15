#include<stdio.h>
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertionsort(int arr[],int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        int key= arr[i];
        for(j=i-1;j>=0 && key<arr[j];j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
        printf("Pass %d:\n",i);
        printarray(arr,size);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
}
