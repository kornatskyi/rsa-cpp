#include <iostream>
#include <math.h>
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include <exception>
#include <string>
#include <bitset>

#include "utils.h"
#include "RSA.h"
#include "Log.h"
#include "Calculator.h"
using namespace std;

const char *decToBin(std::string message, int number)
{
    std::string binary = std::bitset<32>(number).to_string(); // to binary
    cout << message << ": " << binary << endl;
    return NULL;
}

int main(int, char **)
{

    // Log logger;
    // // Seed pseudo-random number generator
    // // Should be seeded only once before the program execution
    // srand(time(NULL));

    // int primeNumberRange[2];
    // primeNumberRange[0] = 300;
    // primeNumberRange[1] = 500;

    // int firsPrime = generatePrimeNumber(primeNumberRange[0], primeNumberRange[1]);
    // int secodePrime = generatePrimeNumber(primeNumberRange[0], primeNumberRange[1]);
    // int regenerationCorrection = 1;
    // while (firsPrime == secodePrime)
    // {
    //     logger.info("Regenerating the second prime number");
    //     secodePrime = generatePrimeNumber(primeNumberRange[0], primeNumberRange[1] + regenerationCorrection);
    //     regenerationCorrection++;
    //     /* code */
    // }

    // cout << "First prime number: " << firsPrime << "\n"
    //      << "Secode prime number: " << secodePrime << endl;

    // try
    // {

    //     RSA rsa(firsPrime, secodePrime);
    //     int e = rsa.choose_e();
    //     int d = rsa.compute_d(e);
    //     int number = rsa.gcd(e, rsa.T);

    //     int publicKey[2] = {e, rsa.N};
    //     int privateKey[2] = {d, rsa.N};

    //     int M = 5;

    //     cout << "Public Key: " << publicKey[0] << " " << publicKey[1] << endl;
    //     cout
    //         << "Private Key: " << privateKey[0] << " " << privateKey[1] << endl;

    //     cout
    //         << "Euler's totient function: " << rsa.T << endl;
    //     cout << "Message: " << M << endl;

    //     int E = rsa.modulusOfLargeNumberToThePower(M, publicKey[0], publicKey[1]);
    //     cout << "Encrypted: " << E << endl;
    //     int D = rsa.modulusOfLargeNumberToThePower(E, privateKey[0], privateKey[1]);
    //     cout << "Decrypted: " << D << endl;
    // }
    // catch (const char *msg)
    // {
    //     logger.error(msg);
    // }

    // Calculator calc;
    // calc.runCalc();
    // Log logger;
    // logger.error("Hello");

    return 0;
}
/*









*/