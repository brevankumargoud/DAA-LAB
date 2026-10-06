// Reversing an array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    int rev[size];
    int j=0;
    for(int i=size-1;i>=0;i--)
    {
        rev[j]=arr[i];
        j++;
    }
    printf("The reversed array: \n");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",rev[i]);
    }
}