#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

const int ALPHALENGTH = 26;

int validate_argument(int argc, string argv[]);
int do_substitution(string argument);


int main(int argc, string argv[])
{
    validate_argument(argc,argv);
    do_substitution(argv[1]);


}







int validate_argument(int argc, string argv[])
{
      if (argc < 2 || argc > 2)
    {
        printf("Usage ./substituation argument\n");
        return 1;
    }

    else if  (strlen(argv[1]) != ALPHALENGTH)
    {
        printf("Please input a 26 character key\n");
        return 1;
    }
    else
    {
        //This code needs to initialise a for loop that we know contains 26 alpha chars.
        //We then need to loop through each character in the loop.
        // then we need to take I and compare it to any character in ALPHABET
        //initialise loopint counter = 0;
        int counter = 0;
          bool seen[26];
          for(int truth = 0; truth < ALPHALENGTH;truth++)
          {
            seen[truth] = false;
        }
        for(int pointer = 0 ; pointer < ALPHALENGTH ; pointer ++)
        {

            for(int subpointer = 0; subpointer < ALPHALENGTH; subpointer ++)
            {
                // if the letter in argv is lowercase and the letter in alphabet at the same pointer is uppercase convert it to
                if(argv[1][pointer] == ALPHABET[subpointer] || argv[1][pointer] == (tolower(ALPHABET[subpointer])))
                {
                    if(argv[1][pointer] >= 97 && argv[1][pointer]<= 122)
                    {
                        if(!seen[argv[1][pointer] - 97])
                    {
                        counter ++;
                        seen[argv[1][subpointer]- 97] = true;
                    }

                    }
                    if(argv[1][pointer] >= 65 && argv[1][pointer]<= 90)

                    if(!seen[argv[1][pointer] - 65])
                    {
                        counter ++;
                        seen[argv[1][subpointer]- 65] = true;
                    }
                }
            }
            //printf("%d",pointer);
        }
        if (counter == ALPHALENGTH)
        {
            return 0;
        }
        else
        {
            printf("Please input a full alphabet\n");
            return 1;
        }
    }
}

int do_substitution(string argument)
{
    //store argv[1] into a string so it's easier to work with for my small brain.
    string key = argument;
    // get the user string.
    string plaintext = get_string("plaintext:");
    string ciphertext;
    // Once reaching this point we have a validated user plaintext.
    //now we need to take the key and make it the alphabet
    // Logically speaking the easiest way to complete this program is to swap the elements with the positional value in the array.
    // first thing is compare the value of key to alphabet and determine whether it's higher or lower.
    // initialise a loop to go through the cipher text / plaintext
    //getting individual character to check for in alphabet.
    int len_text = strlen(plaintext);
    for (int i = 0; i < len_text; i++)
    {
        //creating a string of the current individual character
        char individualchar[] = {toupper(plaintext[i]),'\0'};
        //getting the index value of n plaintext in alphabet
        int alphapointer = strcspn(ALPHABET,individualchar);

        printf("%s\n",individualchar);
        printf("%d\n",alphapointer);

    }

    return 0;

}



