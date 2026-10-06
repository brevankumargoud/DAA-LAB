// Largest element in a array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int c[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&c[i]);
    }
    int x=c[0];
    for(int i=1;i<size;i++)
    {
        if(c[i]>x)
            x=c[i];
    }
    printf("The largest element of array is : %d",x);
}