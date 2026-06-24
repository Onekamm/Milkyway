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
    int f = 0;
    //base case
    if(f == n)
    {
        return 1;
    }

    //recursion
    return n + fibonacci(n - 1);
}
