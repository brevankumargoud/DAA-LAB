// Counting even and odd numbers in an array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    int oc=0, ec=0;
    for(int i=0;i<size;i++)
    {
        printf("Enter array elements: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("The no of odd numbers are: %d\n", oc);
    printf("The no of even numbers are: %d",ec);

}