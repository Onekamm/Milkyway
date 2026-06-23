#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
} candidate;


candidate get_candidate(void)[3];

int main(void)
{
    candidate one = get_candidate();
    printf("%s has %d votes.\n", one.name, one.votes);
}



candidate get_candidate(void)[3]
{
    candidate one[3];

    for (int i = 0; i < 3 ; i ++)
    {
         one[i].name = get_string("Name: ");
         one[i].votes = get_int("Votes: ");
    }
    return one;
}
