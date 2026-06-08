#include <cs50.h>
#include <string.h>
#include <stdio.h>




int main(int argc, string argv[])
{
    string striiing = get_string("Input ");

    for (int i = 0 ,j = strlen(striiing); i < j - 1;i++)

    {
        if (striiing[i] > striiing[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}
