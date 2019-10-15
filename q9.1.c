#include<stdio.h>

int main(void)
{
    int n,i,j,k;
    do
    {
        scanf("%d",&n);
    } while (n<=0 && n>10);

   for (i = n-1; i >= 0; i--)
   {
       for (j = 0; j <i ; j++)
       {
           printf("*");
           
       }
       printf("*\n");
   }
    return 0;
}