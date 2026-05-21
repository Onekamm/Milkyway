#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is X?");
    int y = get_int("What is Y?");

    if (x < y)
    {
        printf("GAwdamn thats a big Y\n");
    }
    else
    {
        printf("Damn thats a big X\n");
    }
    else
    {
        printf("Perfectly balanced as all things should be\n");
    }
}

