//
// Created by bohdan on 12/28/21.
//

#ifndef RSA_CPP_RSA_H
#define RSA_CPP_RSA_H

class RSA
{
public:
    int p = 31;
    int q = 11;
    int N = p * q;
    int T = (p - 1) * (q - 1); // Euler Totient function

    int gcd(int a, int b);
    // choose e such that 1 < e < T and e and T are coprime
    int choose_e();
    // compute d such that d * e = 1 (mod T)
    int compute_d(int e);

    int modulusOfLargeNumberToThePower(int number, int power, int divisor);
};

#endif // RSA_CPP_RSA_H
