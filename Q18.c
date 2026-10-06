// Counting Number of comparisions in the Bubble sort.

#include<stdio.h>
int main()
{
    int arr[5] = {3,5,2,4,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i = 0;i<size-1;i++)
    {
        for(int j = 0;j<size-1-i;j++)
        {
            int temp = arr[j];
            count = count + 1;
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Complete Bubble Sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nNumber of comparisons in the bubble sort are %d",count);
    return 0;
}