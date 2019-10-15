#include<stdio.h>

int main(void)
{
    int i,j,a,b,swap=0,sum=0;
    do
    {
        scanf("%d",&a);
    } while (a<=0);
    int array[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d",&array[i]);
    }
    for (i = 0; i < a; i++)
    {
        for (j = i+1; j < a; j++)
        {
            if (array[i]>array[j])
            {
                swap=array[i];
                array[i]=array[j];
                array[j]=swap;
            }
            
        }
        
    }
    for (i = 0; i < a; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}