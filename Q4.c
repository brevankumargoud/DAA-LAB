// Smallest element in an array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int d[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&d[i]);
    }
    int y=d[0];
    for(int i=1;i<size;i++)
    {
        if(d[i]<y)
            y=d[i];
    }
    printf("The smallest number of the array is: %d",y);
    return 0;
}