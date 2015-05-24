// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

#import <stdio.h>

long getMaxPrimeFactor(long n, int m=2) {
    if(n==1)
        return m;

    if(n % m)
        return getMaxPrimeFactor(n, ++m);

    return getMaxPrimeFactor(n/m, m);
}


int main(void) {
    printf("The hightest prime number is %ld", getMaxPrimeFactor(600851475143));
}


