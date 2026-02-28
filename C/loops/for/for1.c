#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is x?\n");
    int y = get_int("What is y?\n");

    for (x, y; x < y; x++)
    printf("Try\n");
}