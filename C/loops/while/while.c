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
        for (; k > 0; k--)
        {
            printf("meow\n");
        }
    break;
    }
}
