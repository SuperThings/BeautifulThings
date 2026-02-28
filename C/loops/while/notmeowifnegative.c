#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int k;
    do
        {
            k = get_int("How many times? ");
        } 
    while (k <= 0); // keep asking until user enters a positive number
    for (int i = 0; i < k; i++)
        {
            printf("meow\n");
        }
}