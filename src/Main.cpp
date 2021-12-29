#include <iostream>
#include <math.h>
#include "utils.h"
#include "RSA.h"
#include "Log.h"
using namespace std;

// int generatePrimeNumber();

// void Log()
// {

//     cout << "Hello" << endl;
// }

int main(int, char **)
{

    RSA rsa(5, 7);

    int e = rsa.choose_e();
    int d = rsa.compute_d(e);

    int publicKey[2] = {e, rsa.N};
    int privateKey[2] = {d, rsa.N};

    int M = 311;

    cout << "Public Key: " << publicKey[0] << " " << publicKey[1] << endl;
    cout << "Private Key: " << privateKey[0] << " " << privateKey[1] << endl;
    cout << "Message: " << M << endl;

    int E = rsa.modulusOfLargeNumberToThePower(M, publicKey[0], publicKey[1]);
    cout << "Encrypted: " << E << endl;
    int D = rsa.modulusOfLargeNumberToThePower(E, privateKey[0], privateKey[1]);
    cout << "Decrypted: " << D << endl;

    Log log;
    log.setLevel(Log::LogLevelError);
    log.warn("Hello!");
    log.error("Hello!");
    log.info("Hello!");

    // cout << modulusOfLargeNumberToThePower(2, 3, 5) << endl;
    return 0;
}
