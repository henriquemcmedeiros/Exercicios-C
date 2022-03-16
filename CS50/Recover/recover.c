#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define BLOCK_SIZE 512

typedef uint8_t BYTE;
BYTE buffer[BLOCK_SIZE];

int main(int argc, char *argv[])
{
    // Inicializing variables
    size_t bytes_read;
    bool is_first_jpeg = false;
    FILE *current_file;
    char current_filename[100];
    int current_filenumber = 0;
    bool found_jpeg = false;

    // Check for invalid usage
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    char *inputFile = argv[1];
    if (inputFile == NULL)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    // Open the file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Unable to open file: %s\n", inputFile);
        return 1;
    }

    while (true)
    {
        bytes_read = fread(buffer, sizeof(BYTE), BLOCK_SIZE, file);
        if (bytes_read == 0)
        {
            break;
        }
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            found_jpeg = true;

            if (!is_first_jpeg)
            {
                is_first_jpeg = true;
            }
            else
            {
                fclose(current_file);
            }
            sprintf(current_filename, "%03i.jpg", current_filenumber);
            current_file = fopen(current_filename, "w");
            fwrite(buffer, sizeof(BYTE), bytes_read, current_file);
            current_filenumber++;
        }
        else
        {
            if (found_jpeg)
            {
                fwrite(buffer, sizeof(BYTE), bytes_read, current_file);
            }
        }
    }
    fclose(file);
    fclose(current_file);
    return 0;
}