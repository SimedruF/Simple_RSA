#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rsa.h"

int prime_p = 61;
int prime_q = 53;

// Function to calculate the greatest common divisor
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

// Function to generate the keys
void generateKeys(int *e, int *d, int *n)
{
    int p, q;

    // Choose two large prime numbers
    p = prime_p; // Example
    q = prime_q; // Example

    *n = p * q;                  // Compute n
    int phi = (p - 1) * (q - 1); // compute φ(n)

    // Choose a public exponent(s)
    *e = 17; // Example, must be less than φ(n) and relatively prime to φ(n)

    // Compute private exponent (d)
    *d = 1;
    while (((*d) * (*e)) % phi != 1)
    {
        (*d)++;
    }
}

// Encrypt function
int encrypt(int message, int e, int n)
{
    int cipher = 1;

    for (int i = 0; i < e; i++)
    {
        cipher = (cipher * message) % n;
    }

    return cipher;
}

// Decrypt function
int decrypt(int cipher, int d, int n)
{
    int message = 1;

    for (int i = 0; i < d; i++)
    {
        message = (message * cipher) % n;
    }

    return message;
}