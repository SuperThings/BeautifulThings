#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int k = get_int("How many times?");
    for (int i = 0; i < k; i++)
    {
        printf("meow\n");
    }
}