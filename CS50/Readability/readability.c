#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int sentence = 0;
    int nonletters = 0;

    //Get the text from the user
    string text = get_string("Text: ");

    //Count how many nonletters are there
    for (int i = 0; i < strlen(text); i++)
    {
        for (int k = 32; k <= 64; k++)
        {
            if (text[i] == k)
            {
                nonletters++;
            }
        }
    }

    //Count how many word are there
    int spaces = 0;
    int letters = strlen(text) - nonletters;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == 32)
        {
            spaces++;
        }
    }
    int words = spaces + 1;

    //Count how many senences are there
    for (int j = 0; text[j] != '\0'; j++)
    {
        if (text[j] == '.' || text[j] == '?' || text[j] == '!')
        {
            sentence++;
        }
    }

    //Grade the sentence
    int l;
    l = 100 * letters / words;
    int s;
    s = 100 * sentence / words;
    int grade = round(0.0588 * l - 0.296 * s - 15.8);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}