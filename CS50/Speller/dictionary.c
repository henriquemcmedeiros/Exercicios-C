// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = (LENGTH + 1) * 'z';

// Hash table
int TotalWords = 0;
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int hashV = hash(word);

    if (table[hashV] == NULL)
    {
        return false;
    }
    else
    {
        node *pointer;
        pointer = table[hashV];

        while (pointer != NULL && (strcasecmp(word, pointer->word) == 0))
        {
            return true;
        }
        pointer = pointer->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned int hashValue = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        hashValue += tolower(word[i]);
    }
    return (hashValue % N);
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *dict_pointer = fopen(dictionary, "r");
    if (dict_pointer == NULL)
    {
        return false;
    }

    char buffer[LENGTH + 1];
    while (fscanf(dict_pointer, "%s", buffer) != EOF)
    {
        node *temp = malloc(sizeof(node));
        if (temp == NULL)
        {
            return false;
        }
        temp->next = NULL;

        strcpy(temp->word, buffer);
        int hashC = hash(buffer);

        if (table[hashC] == NULL)
        {
            table[hashC] = temp;
        }
        else
        {
            temp->next = table[hashC];
            table[hashC] = temp;
        }
        TotalWords++;
    }
    fclose(dict_pointer);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    int words = 0;
    for (int i = 0; i < N; i++)
    {
        struct node *pointer;
        pointer = table[i];
        if (pointer != NULL)
        {
            pointer = pointer->next;
            words++;
        }
    }
    return words;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i < N; i++)
    {
        struct node *temp1;
        temp1 = table[i];

        struct node *temp2;
        temp2 = table[i];

        while (temp1 != NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            free(temp2);
        }
    }
    return true;
}
