#include <stdio.h>
#include <cs50.h>

int main(void)
{
    while (true)
    {    
        int k = get_int("how many times? ");   
        if(k < 0)
        {
            continue;
        }
        for(; k > 0; k--)
        {
            if (k == 5)                     // or skip the condition and let the loop execute until k
                    {                       // becomes 0, which will also exit the loop.
                    continue;               // or you can use "break;" to exit the loop 
                    }                       // when k is equal to 5
                    printf("meow\n");
        }
        break;
    }
}