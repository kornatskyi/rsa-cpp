#include "Log.h"

int p = 2;
int q = 7;
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
    std::cout << "e = " << e << std::endl;
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

int e = choose_e();
int d = compute_d(e);

int publicKey[2] = {N, e};
int privateKey[2] = {N, d};

int main(int, char **)
{

    std::cout << "Public Key: " << publicKey[0] << " " << publicKey[1] << std::endl;
    std::cout << "Private Key: " << privateKey[0] << " " << privateKey[1] << std::endl;

    return 0;
}
