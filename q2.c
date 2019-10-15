#include<stdio.h>

int main(void)
{
    int k,i,n,sum=0;
    scanf("%d",&k);
    for (n = 1; n <=k; n++)
    {
       sum+=(2*n)+1; 
    }
    printf("%d",sum);
    
    return 0;
}