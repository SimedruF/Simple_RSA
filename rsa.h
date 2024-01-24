#ifndef RSA_H
#define RSA_H
#pragma once
extern int decrypt(int cipher, int d, int n);
extern int encrypt(int message, int e, int n);
extern void generateKeys(int *e, int *d, int *n);
extern int gcd(int a, int b);
extern int prime_p;
extern int prime_q;

#endif // RSA_H