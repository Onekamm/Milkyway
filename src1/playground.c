#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number;
    do

    {
        number = get_int("Please enter a number\n");

    }
    while(number <= 0);

    for (int i = 0; i < number; i++)
    {
        printf("67\n");
    }


}
void abstract(void)
{
    printf("This is a test\n");
}

