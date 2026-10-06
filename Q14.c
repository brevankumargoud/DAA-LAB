// Placing the smallest element in the first place using the selection sort

#include<stdio.h>
int main()
{
    int arr[5] = {3,5,2,4,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<1;i++)
    {
        int min = i;
        for(int j = i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Smallest Element in the first place using Selection Sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}