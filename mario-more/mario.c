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
    
}
