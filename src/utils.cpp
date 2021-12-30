#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include <stdexcept>

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

// Generats prime number in range from 'from' to 'to' integer values
// If prime numbers isn't found in the range will return the prime number that is larger than 'to' integer
// return n where n is a prime number and if ∃ n ∈ from...to then from < n < to otherwise n > to
int generatePrimeNumber(int from, int to)
{

    if (from >= to)
    {
        throw std::invalid_argument("Invalid range from...to");
    }

    int number = rand() % (to - from) + from;

    while (!isPrime(number))
    {
        number++;
    }

    return number;
}
