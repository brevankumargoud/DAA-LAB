// Checking if an array is sorted or not
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int f[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&f[i]);
    }
    int flag=1;
    for(int i=0;i<size-1;i++)
    {
        int j=i+1;
        if(f[i]>f[j])
        {
            flag=0;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==1)
    {
        printf("The array is sorted in ascending order.");
    }
    else
    {
        printf("The array is unsorted.");
    }
    return 0;
}