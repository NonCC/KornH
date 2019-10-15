#include<stdio.h>

int main(void)
{
    int i,n;
    do
    {
        scanf("%d",&n);
    } while (n<=0);
    char array[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %c",&array[i]);
    }
    for (i = 0; i < n; i++)
    {
       if (array[i]>=97 && array[i]<=122)
       {
           array[i]=array[i]-32;
       }
    }
    for (i = 0; i < n; i++)
    {
        printf("%c ",array[i]);
    }
    
    return 0;
}