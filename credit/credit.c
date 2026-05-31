#include <stdio.h>
#include <cs50.h>

int check_number(void);

int main(void)
{
    check_number();
}





int check_number(void)
{
    while(true)
    {
        int number = get_long("Number: ");
        while(number > 100){
             if (number % 10 > 100 )
        {
            number % 10;
        }
        printf("%d",number);

        }

    }

}
