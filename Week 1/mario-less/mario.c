#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while (x < 1 || x >= 9);

    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j < x - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}