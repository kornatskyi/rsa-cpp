//
// Created by bohdan on 12/28/21.
//

#include "RSA.h"

int RSA::gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

// choose e such that 1 < e < T and e and T are coprime
int RSA::choose_e()
{
    int e = 0;
    int i = 2;
    while (i < T)
    {
        if (gcd(i, T) == 1)
        {
            e = i;
            break;
        }
        i++;
    }
    return e;
}
// compute d such that d * e = 1 (mod T)
int RSA::compute_d(int e)
{
    int d = 0;
    int i = 1;
    while (i < T)
    {
        if ((i * e) % T == 1)
        {
            d = i;
            break;
        }
        i++;
    }
    return d;
}

int RSA::modulusOfLargeNumberToThePower(int number, int power, int divisor)
{

    int temp = number % divisor;

    for (int i = 1; i < power; i++)
    {
        temp = (temp * number) % divisor;
        /* code */
    }
    return temp;
}