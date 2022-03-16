#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    //TODO
    int cents;
    do
    {
        cents = get_int("Amount of Change Due: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int counter = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        counter++;
    }
    return counter;
}

int calculate_dimes(int cents)
{
    // TODO
    int counter = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        counter++;
    }
    return counter;
}

int calculate_nickels(int cents)
{
    // TODO
    int counter = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        counter++;
    }
    return counter;
}

int calculate_pennies(int cents)
{
    // TODO
    int counter = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        counter++;
    }
    return counter;
}