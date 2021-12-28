#include <iostream>
#include <math.h>
#include "utils.h"
using namespace std;

// int generatePrimeNumber();

// void Log()
// {

//     cout << "Hello" << endl;
// }

int p = 31;
int q = 11;
int N = p * q;
int T = (p - 1) * (q - 1); // Euler Totient function

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

class Log
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;

private:
    int m_LogLevel = LogLevelInfo;

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Error(const char *message)
    {
        if (m_LogLevel >= LogLevelError)
            cout << "[ERROR]: " << message << endl;
    }
    void Warn(const char *message)
    {
        if (m_LogLevel >= LogLevelWarning)
            cout << "[WARNING]: " << message << endl;
    }

    void Info(const char *message)
    {
        if (m_LogLevel >= LogLevelInfo)
            cout << "[INFO ]: " << message << endl;
    }
};

int main(int, char **)
{

    // int e = choose_e();
    // int d = compute_d(e);

    // int publicKey[2] = {e, N};
    // int privateKey[2] = {d, N};

    // int M = 311;

    // cout << "Public Key: " << publicKey[0] << " " << publicKey[1] << endl;
    // cout << "Private Key: " << privateKey[0] << " " << privateKey[1] << endl;
    // cout << "Message: " << M << endl;

    // int E = modulusOfLargeNumberToThePower(M, publicKey[0], publicKey[1]);
    // cout << "Encrypted: " << E << endl;
    // int D = modulusOfLargeNumberToThePower(E, privateKey[0], privateKey[1]);
    // cout << "Decrypted: " << D << endl;

    Log log;
    log.SetLevel(log.LogLevelWarning);
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");

    // cout << modulusOfLargeNumberToThePower(2, 3, 5) << endl;
    return 0;
}
