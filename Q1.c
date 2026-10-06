// Reading and displaying elements of array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&a[i]);
    }
    printf("The array elements are: \n");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}