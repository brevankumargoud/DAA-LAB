// Comparing Between Bubble sort,insertionertion sort and the selectionection sort.

#include<stdio.h>
int main()
{
    int bubble[5] = {3,5,2,4,1};
    int selection[5] = {3,5,2,4,1};
    int insertion[5] = {3,5,2,4,1};

    int size = sizeof(bubble)/sizeof(bubble[0]);

    // Bubble sort
    for(int i = 0;i<size-1;i++)
    {
        for(int j = 0;j<size-1-i;j++)
        {
            int temp = bubble[j];
            if(bubble[j]>bubble[j+1])
            {
                bubble[j] = bubble[j+1];
                bubble[j+1] = temp;
            }
        }
    }

    // Insertion Sort
    for(int i = 1;i<size;i++)
    {
        for(int j = i;j>0;j--)
        {
            if(insertion[j]<insertion[j-1])
            {
                int temp = insertion[j];
                insertion[j] = insertion[j-1];
                insertion[j-1] = temp;
            }
            else
                break;
        }
    }

    // Selection Sort
    for(int i = 0;i<size-1;i++)
    {
        int min = i;
        for(int j = i+1;j<size;j++)
        {
            if(selection[j]<selection[min])
                min = j;
        }
        int temp = selection[i];
        selection[i] = selection[min];
        selection[min] = temp;
    }

    printf("Selection Sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",selection[i]);
    }

    printf("\nInsertion sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",insertion[i]);
    }

    printf("\nBubble Sort : ");
    for(int i = 0;i<size;i++)
    {
        printf("%d ",bubble[i]);
    }
    return 0;
}