#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>

#include "utils.h"
#include "Log.h"

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

int generatePrimeNumber(int from, int to)
{
    Log log;

    if (from >= to)
    {
        log.error("Wrong range");
        return -1;
    }

    srand(time(NULL));
    int number = rand() % (to - from) + from;

    std::cout << "Time: " << time(NULL) << std::endl;

    while (!isPrime(number))
    {
        number++;
    }

    return number;
}
