#include <stdio.h>

int main(void)
{
    int user = 0;
  
    printf("Dê a altura: ");
    scanf("%d", &user);
  
    for (int i = 0; i < user; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}