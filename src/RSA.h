#include "Log.h"
#pragma once

class RSA
{
public:
    int p;
    int q;
    int N;
    int T;
    Log logger;
    RSA(int gP, int gQ); 

    int gcd(int a, int b);

    // choose e such that 1 < e < T and e and T are coprime
    int choose_e();
    // compute d such that d * e = 1 (mod T)
    int compute_d(int e);
    int modulusOfLargeNumberToThePower(int number, int power, int divisor);
};