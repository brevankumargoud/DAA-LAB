// Linear Search
#include<stdio.h>
int main()
{
    int f[10]={0,2,4,6,8,10,12,14,16,18};
    int e;
    printf("Enter the element to search in an array: ");
    scanf("%d",&e);
    for(int i=0;i<10;i++)
    {
        if(f[i]==e)
        {
            printf("Element found at the position %d of the array.",i);
            return 0;
        }
        else
            continue;
    }
    printf("Element not found in the array.");
    return 0;
}