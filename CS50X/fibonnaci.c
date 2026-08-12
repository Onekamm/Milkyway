#include <cs50.h>
#include <stdio.h>




int fibonacci(int n);


int main(void)
{
    int fib = get_int("Where would you like to see Fibonnaci till: ");
    printf("Fibonacci sequence is %d\n",fibonacci(fib));

}



int fibonacci(int n)
{
    //base case
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    //recursion
    return fibonacci(n - 1) + fibonacci(n - 2);
}
