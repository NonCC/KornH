#include<stdio.h>

int main(void)
{
    int n,i,j,k;
    do
    {
        scanf("%d",&n);
    } while (n<=0 && n>10);
   for (i = 0; i < n; i++)
   {
       for (j = 0; j <n ; j++)
       {
           if (i+j==n-1)
           {
            printf("/");   
           }
           else
           {
               printf(" ");
           } 
       }
       for (k = n; k < 2*n; k++)
       {
           if (k-i==(2*n)-5)
           {
            printf("\\");   
           }
           else
           {
               printf(" ");
           } 
       }
       
       printf("\n");
   }
    return 0;
}