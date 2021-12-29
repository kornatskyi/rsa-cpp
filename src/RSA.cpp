#include <iostream>

class RSA
{
public:
    int p;
    int q;
    int N;
    int T;

    RSA()
    {
        p = 31;
        q = 11;
        N = p * q;
        T = (p - 1) * (q - 1);
    }

    RSA(int p, int q)
    {
        this->p = p;
        this->q = q;
        N = p * q;
        T = (p - 1) * (q - 1);
    }

    ~RSA()
    {
        std::cout << "Destroyed!" << std::endl;
    }

    int gcd(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return gcd(b, a % b);
    }

    // choose e such that 1 < e < T and e and T are coprime
    int choose_e()
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
    int compute_d(int e)
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

    int modulusOfLargeNumberToThePower(int number, int power, int divisor)
    {

        int temp = number % divisor;

        for (int i = 1; i < power; i++)
        {
            temp = (temp * number) % divisor;
            /* code */
        }
        return temp;
    }
};