#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

string ALPHABET[]= {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

const int ALPHALENGTH = 26;

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
        //This code needs to initialise a for loop that we know contains 26 alpha chars.
        //We then need to loop through each character in the loop.
        // then we need to take I and compare it to any character in ALPHABET
        //initialise loop
        for(int pointer = 0 ; pointer < ALPHALENGTH ; pointer ++)
        {
            int counter = 0;

            for(int subpointer = 0; subpointer < ALPHALENGTH; subpointer ++)
            {
                //argv[1][pointer]
                if(argv[1])
                printf("%s", ALPHABET[pointer]);
            }
            //printf("%d",pointer);
            //printf("%d", counter);
        }
        // initialise a for loop
    }
    return 0;
}



