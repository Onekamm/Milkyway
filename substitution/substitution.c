#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

const string ALPHABET[]= {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

int validate_argument(int argc, string argv[]);

int main(int argc, string argv[])
{
    validate_argument(argc,argv);

}







int validate_argument(int argc, string argv[])
{
      if (argc < 2 || argc > 2)
    {
        printf("Usage ./substituation argument\n");
        return 1;
    }

    else if  (strlen(argv[1]) != 26)
    {
        printf("Please input a 26 character key\n");
        return 1;
    }
    else
    {
        int counter = 0;
        for (int i = 0, j = strlen(argv[1]); i <= j; i ++)
        {
            for(int n = 0; )
            if(!isalpha(argv[1][i]))
            printf("Please input alphabetic character\n");
            return 1;
        }
        //initialise a for loop
        for (int i = 0 ,j = strlen(argv[1]); i < j; i++)
        {
            printf("%c",argv[1][i]);
        }
        printf("%d",counter);
    }
    return 0;
}
