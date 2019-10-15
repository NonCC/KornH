#include<stdio.h>

int main(void)
{
    int n,i,j,k;
    do
    {
        scanf("%d",&n);
    } while (n<=0 && n>10);

   for (i = 0; i <n; i++)
   {
       for (j = 0; j <n-1 ; j++)
       {           
        printf("_");   
       }
       for (k = j; k < n; k++)
       {
           printf("*");
       }
       
       printf("\n");
   }
    return 0;
}