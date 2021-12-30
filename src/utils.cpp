#include <iostream>
#include <stdlib.h> /* srand, rand */

#include "utils.h"

// Check if number is prime buy simple brut force
bool isPrime(int number)
{

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int generatePrimeNumber(int range)
{

    int number = 0;
    while (!isPrime(number))
    {
        number++;
    }

    return number;
}
