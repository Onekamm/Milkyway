#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int process_paragraph(string input);

int main(void)
{
    string paragraph = get_string("Please input your Paragraph: \n");
    if (strlen(paragraph) == 0)
    {
        printf("Please input a valid paragraph\n");
        return 1;
    }
    process_paragraph(paragraph);
}

int process_paragraph(string input)
{
    int word = 0;
    int sentences = 0;
    int letters = 0;
    int index;
    for (int i = 0, j = strlen(input); i <= j; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            word++;
        }
        if (input[i] == '.' || input[i] == '!' || input[i] == '?')
        {
            sentences++;
        }
        if (isalpha(input[i]))
        {
            letters++;
        }
    }

    if (sentences == 0 || word == 0)
    {
        printf("Please enter a valid paragraph with separated words and sentences\n");
        return 1;
    }
    int L = (letters / (float) word) * 100;
    int S = (sentences / (float) word) * 100;
    printf("%i ", L);
    printf("%i ",S);

    index = 0.0588 * L - 0.296 * S - 15.8;

    //printf("index not rounded: %i\n",index);
    //index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
        return 0;
    }
}
