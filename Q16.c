// Place the first element from the unsorted array in the sorted array using the insertion sort.

#include<stdio.h>
int main()
{
    int arr[5] = {3,2,5,4,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1;i<2;i++)
    {
        for(int j = i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else
                break;
                
        }
    }

    printf("Array after placing the first element from the unsorted array in the sorted array using the insertion sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}