// Swapping adjacent elements in a array
#include<stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int e[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&e[i]);
    }
    for(int i=0;i<size-1;i=i+2)
    {
        swap(&e[i],&e[i+1]);
    }
    printf("The array with it's adjacent elements swapped is: \n");
    for(int i=0;i<size;i++)
    {
        printf(" %d ",e[i]);
    }
}