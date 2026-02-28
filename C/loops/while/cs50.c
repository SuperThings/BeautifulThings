#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int l = 6;
    do
    {
        int l = get_int("how many repeats?");
    }
    while (l <= 0);
    for (; l > 0; l--)
    {
        printf("meow\n");
    }
}
