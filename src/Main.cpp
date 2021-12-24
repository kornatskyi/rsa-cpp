#include "Log.h"
#include <math.h>

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



int modulusOfLargeNumberToThePower(int number, int power, int divisor) {

int temp = number % divisor;

for (int i = 1; i < power; i++)
{
    temp = (temp * number) % divisor;
    /* code */
}
    return temp;

}


int main(int, char **)
{

    int e = choose_e();
    int d = compute_d(e);

    int publicKey[2] = {e, N};
    int privateKey[2] = {d, N};

    int M = 1;

    std::cout << "Public Key: " << publicKey[0] << " " << publicKey[1] << std::endl;
    std::cout << "Private Key: " << privateKey[0] << " " << privateKey[1] << std::endl;
    std::cout << "Message: " << M  << std::endl;

    int E = modulusOfLargeNumberToThePower(M, publicKey[0], publicKey[1]);
    std::cout << "Encrypted: " << E  << std::endl;
    int D = modulusOfLargeNumberToThePower(E, privateKey[0], privateKey[1]);
    std::cout << "Decrypted: " << D  << std::endl;
    
    

    // std::cout << modulusOfLargeNumberToThePower(2, 3, 5) << std::endl;
    return 0;
}

















