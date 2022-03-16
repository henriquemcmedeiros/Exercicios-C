#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float amountR = image[i][j].rgbtRed;
            float amountG = image[i][j].rgbtGreen;
            float amountB = image[i][j].rgbtBlue;

            int grayshade = round((amountR + amountG + amountB) / 3);

            image[i][j].rgbtRed = grayshade;
            image[i][j].rgbtGreen = grayshade;
            image[i][j].rgbtBlue = grayshade;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float amountR = image[i][j].rgbtRed;
            float amountG = image[i][j].rgbtGreen;
            float amountB = image[i][j].rgbtBlue;

            int sepiaR = round((.393 * amountR) + (.769 * amountG) + (.189 * amountB));
            int sepiaG = round((.349 * amountR) + (.686 * amountG) + (.168 * amountB));
            int sepiaB = round((.272 * amountR) + (.534 * amountG) + (.131 * amountB));

            if (sepiaR > 255)
            {
                sepiaR = 255;
            }
            if (sepiaG > 255)
            {
                sepiaG = 255;
            }
            if (sepiaB > 255)
            {
                sepiaB = 255;
            }

            image[i][j].rgbtRed = sepiaR;
            image[i][j].rgbtGreen = sepiaG;
            image[i][j].rgbtBlue = sepiaB;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            float counter = 0.00;
            int totalR, totalG, totalB;
            totalR = totalG = totalB = 0;

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int actualX = i + x;
                    int actualY = j + y;

                    if (actualX < 0 || actualY < 0 || actualX > (height - 1) || actualY > (width - 1))
                    {
                        continue;
                    }

                    totalR += image[actualX][actualY].rgbtRed;
                    totalG += image[actualX][actualY].rgbtGreen;
                    totalB += image[actualX][actualY].rgbtBlue;

                    counter++;
                }

                temp[i][j].rgbtRed = round(totalR / counter);
                temp[i][j].rgbtGreen = round(totalG / counter);
                temp[i][j].rgbtBlue = round(totalB / counter);

            }
        }
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = temp[i][j].rgbtRed;
            image[i][j].rgbtGreen = temp[i][j].rgbtGreen;
            image[i][j].rgbtBlue = temp[i][j].rgbtBlue;
        }
    }
    return;
}