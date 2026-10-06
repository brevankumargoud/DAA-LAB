// Complete bubble sort
#include<stdio.h>
int main()
{
    int a[10]={1,2,4,3,5,6,33,7,4,6};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            int temp=a[j];
            if(a[j]>a[j+1])
            {
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The required array is: ");
    for(int i=0;i<10;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}