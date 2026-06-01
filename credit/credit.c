#include <stdio.h>
#include <cs50.h>

int check_number(void);
int calculate_card(number);

int main(void)
{
    calculate_card(check_number());


}





int check_number(void)
{
    while(true)
    {
        long number = get_long("Number: ");
        long newnumber;
        while(number > 99)
        {
            number = number / 10;

        }
        newnumber = number;
        if(newnumber = )
        printf("%ld\n", newnumber);
        return number;

    }
int calculate_card(number)
{
    return statement;
}

}
