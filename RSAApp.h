#pragma once
namespace RSAApp{
    void RenderUi(void);
    int gcd(int a, int b);
    void generateKeys(int *e, int *d, int *n);
    int encrypt(int message, int e, int n);
    int decrypt(int cipher, int d, int n);
    int RSA_main(void);
}