#include <cs50.h>
#include <stdio.h>

long get_num(void);
int get_length(long number);
int get_firsttwo(long number);
void print_result(int firsttwo, int length, int validnum);
bool check_sum(long number);

int main(void)
{
    long retgetnum = get_num();
    print_result(get_firsttwo(retgetnum), get_length(retgetnum), check_sum(retgetnum));
}

long get_num(void)
{
    // get the input long number
    long number = get_long("Number: ");
    return number;
}

int get_length(long number)
{
    // small loops to get the length of number
    int length = 0;
    while (number > 0)
    {
        number = number / 10;
        length++;
    }
    return length;
}

int get_firsttwo(long number)
{
    while (number > 99)
    {
        number = number / 10;
    }
    return number;
}

void print_result(int firsttwo, int length, int validnum)
{
    if ((firsttwo == 34 || firsttwo == 37) && length == 15 && validnum == true)
    {
        printf("AMEX\n");
    }
    else if ((firsttwo == 51 || firsttwo == 52 || firsttwo == 53 || firsttwo == 54 ||
              firsttwo == 55) &&
             length == 16 && validnum == true)
    {
        printf("MASTERCARD\n");
    }
    else if (firsttwo / 10 == 4 && (length == 13 || length == 16) && validnum == true)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

bool check_sum(long number)
{
    int counter = 1;
    int sum = 0;
    int tomultiply = 0;
    int luhn = 0;
    int result;
    while (number > 0)
    {
        if (counter % 2 != 0)
        {
            sum += number % 10;
            counter++;
        }
        else
        {
            luhn = (number % 10) * 2;
            if (luhn >= 10)
            {
                tomultiply += luhn / 10;
            }

            tomultiply += luhn % 10;
            counter++;
        }
        number = number / 10;
    }
    result = sum + tomultiply;
    if (result % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
