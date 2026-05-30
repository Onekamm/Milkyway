#include <cs50.h>
#include <stdio.h>

int get_num(void);
void make_pyramid(int number);
int main(void)
{
    make_pyramid(get_num());
}

int get_num(void)
{
    int n;
    while (true)
    {
        n = get_int("Height.\n");
        if (n > 0 && n <= 8)
        {
            return n;
        }
    }
}

void make_pyramid(int number)
{
    char s[] = "#";
    // for each row do something
    for (int row = 0; row < number; row++)
    {
        // before we print the hashtags lets print the correct amount of spaces
        for (int spaces = number - row - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }
        // then print the correct number of hashtags for the current row
        for (int hashtag1 = 0; hashtag1 <= row; hashtag1++)
        {
            printf("%s", s);
        }
        printf("  ");

        for (int hashtag2 = 0; hashtag2 <= row; hashtag2++)
        {
            printf("%s", s);
        }
        printf("\n");
    }
}
