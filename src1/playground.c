#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("Enter za number\n");
    while (number <= 0)
    {
        printf("This is not a valid number please input a number larger than 0\n");
        number = get_int("Enter za number\n");
    }

    for (int i = 0; i < number; i++)
    {
        printf("za number is not equal yet\n");
    }

}
