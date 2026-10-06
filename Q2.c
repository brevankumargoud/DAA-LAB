//Finding sum of array elements
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int b[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the array elements: ");
        scanf("%d",&b[i]);
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=b[i];
    }
    printf("The sum of array elements is: %d", sum);
    return 0;
}