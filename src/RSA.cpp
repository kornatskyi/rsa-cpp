#include <iostream>
#include <string>

#include "RSA.h"
#include "Log.h"


    RSA::RSA(int gP, int gQ)
    {

        if (gP == gQ)
        {
            throw "q(firs prime number) cannot be equal to p(second prime number).";
        }

        // this->p = gP;
        // this->q = gQ;
        // p = 347;
        // q = 419;
        p = 331;
        q = 401;
        N = p * q;
        T = (p - 1) * (q - 1);
    }

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
        logger.info(("Number: " + std::to_string(number)).c_str());
        logger.info(("Power: " + std::to_string(power)).c_str());
        logger.info(("divisor: " + std::to_string(divisor)).c_str());
        int temp = number % divisor;

        for (int i = 1; i < power; i++)
        {
            std::cout << temp * number << "%" << divisor << std::endl;

            temp = (temp * number) % divisor;
            /* code */
        }
        return temp;
    }
/*
















*/