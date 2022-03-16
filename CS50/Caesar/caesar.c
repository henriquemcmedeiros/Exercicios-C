#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void caesarCode(char *, int);

int main(int argc, string argv[])
{
    // If and for used to validate key prompted by the user
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (isalpha(argv[1][i]) != 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // Converts key from alpha to integer
    int key = atoi(argv[1]);

    // Asks user for a text
    char *plaintext = get_string("Enter text to encrypt: ");
    // Runs function that ciphers the text
    caesarCode(plaintext, key);
}

void caesarCode(char *t, int k)
{
    printf("ciphertext: ");
    // Iterates through each letter of the text
    for (int i = 0; t[i] != '\0'; i++)
    {
        // Check if it's alphabetical
        if (isalpha(t[i]) != 0)
        {
            // Checks if it's uppercase
            if (isupper(t[i]) != 0)
            {
                // Applies formula to ASCII uppercase letters
                printf("%c", ((t[i] - 'A' + k) % 26) + 'A');
            }
            // Same, but lowercase
            else
            {
                printf("%c", ((t[i] - 'a' + k) % 26) + 'a');
            }
        }
        // Keeps all non-alphabetical characters
        else
        {
            printf("%c", t[i]);
        }
    }
    printf("\n");
}