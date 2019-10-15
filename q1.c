#include<stdio.h>

int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>=0 && y>=0)
    {
        if (x==0 && y==0)
        {
           printf("LOLIPOP"); 
        }
        else
        {
            printf("Quadrant 1");
        }
        
        
    }
    else if (x<0 && y>=0)
    {
        printf("Quadrant 2"); 
    }
    else if (x<0 && y<0)
    {
        printf("Quadrant 3"); 
    }
     else if (x>=0 && y<0)
    {
        printf("Quadrant 4"); 
    }
    
    return 0;
}