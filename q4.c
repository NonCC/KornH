#include<stdio.h>

int main(void)
{
    int i=2,a,sum=1;
    scanf("%d",&a);
    while (sum!=a)
    {
        if (a%i==0)
        {
            a=a/i;
            sum*=i;
            printf("%d ",i);
            i=2;
        }
        else
        {
            i++;
        }   
    }
    return 0;
}