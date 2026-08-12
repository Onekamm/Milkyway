#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Prompt the user for some text
    string text = get_string("Text: ");

    // Count the number of letters, words, and sentences in the text
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    // Compute the Coleman-Liau index
    float const L = (letters / (float) words) * 100;
    float const S = (sentences / (float) words) * 100;

    float index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print the grade level
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int) index);
    }
}

int count_letters(string text)
{
    int letters = 0;
    for (int i = 0, j = strlen(text); i <= j; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int word = 0;
    // Return the number of words in text
    for (int i = 0, j = strlen(text); i <= j; i++)
    {
        if ((isblank(text[i]) && isprint(text[i - 1])) || text[i] == '\0')
        {
            word++;
        }
    }
    return word;
}

int count_sentences(string text)
{
    int sentence = 0;
    // Return the number of sentences in text
    for (int i = 0, j = strlen(text); i <= j; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence++;
        }
    }
    return sentence;
}
