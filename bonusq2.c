#include<stdio.h>

int main(void)
{
    int n,i,count=0;
    do
    {
        scanf("%d",&n);
    } while (n<=0);
    char array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%c",&array[i]);
    }
    for (i = 0; i < n; i++)
    {
       if (array[i]=='('||array[i]==')')
       {
           count++;
       } 
    }
    if (count==n)
    {
        printf("Correct");
    }
    else if (count>0 && count<n)
    {
        printf("Incorrect");
    }
    else  
    {
        printf("You weak");
    }
    
    
    return 0;
}