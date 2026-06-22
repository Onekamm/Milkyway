#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    candidate one;

    one.name = get_string("Name: ");
    one.votes = get_int("Votes: ");

    printf("%s has %d votes.\n", one.name, one.votes);
}
