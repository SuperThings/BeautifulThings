#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int i = 0;
    while(i < 10)
    {
        printf("&");
        i++;        
        for(int k = 1; k < i; k++)
        {
            printf("&");       
        }
    printf("\n");
    }
    i = 0;
    while(i < 9)
    {
        printf("&");
        i++;        
        for(int k = 9; k > i; k--)
        {
            printf("&");       
        }
    printf("\n");
    }
}



