#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("What is the value of y?\n");
    int k = get_int("What is the value of x?\n");
    int l = i + k;

    if (i > k)
    {
        printf("i is greater than k.\n");
    }
    else if (k > i)
    {
        printf("k is greater than i.\n");
    }
    else
    {
        printf("%i.\n", l);
    }  
}