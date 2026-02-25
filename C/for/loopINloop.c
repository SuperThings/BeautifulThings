#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 0, k = 10; i < k; i++)
    {
        printf("#");

        for (int i = 0, k = 10; i < k; i++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
    }

}