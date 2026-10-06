// Swap using temporary variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of first element: ");
    scanf("%d",&a);
    printf("Enter the value of second element: ");
    scanf("%d",&b);
    printf("The values of first and second elements before swapping are: %d and %d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("The values of first and second elements after swapping are: %d and %d", a, b);
    return 0;
}