#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
} candidate;


candidate get_candidate(void);

int main(void)
{

    printf("%s has %d votes.\n", ballot.one.name, ballot.one.votes);
}



candidate get_candidate(void)
{
    candidate one;

    one.name = get_string("Name: ");
    one.votes = get_int("Votes: ");



    return one;
}
