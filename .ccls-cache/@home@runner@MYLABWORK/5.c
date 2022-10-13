#include <stdio.h>

int asdasdsa() 
{
    int n,first;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        first=n%10;
        n=n/10;
    }
    printf("%d",first);
    return 0;
}