#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree, Y or N\n");

    if (c == 'Y' || c == 'y')
    {
        printf("You chose Yes\n");
    }
    else
    {
        printf("You chose No\n");
    }


}
