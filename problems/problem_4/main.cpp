// The sum of the squares of the first ten natural numbers is
// 12 + 22 + ... + 102 = 385
// 
// The square of the sum of the first ten natural numbers is
// (1 + 2 + ... + 10)2 = 552 = 3025
// 
// Hence the difference between the sum of the squares of the
// first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the
// first one hundred natural numbers and the square of the sum.

#import <stdio.h>


long int getSumAritmetic(int n, int firstTerm, int lastTerm) {
    return n * (firstTerm + lastTerm) * 0.5f;
}


int main(void) {

    long int sum1 = 0, sum2, sum2Squared;
    int limit = 100;
    int n = 0;

    // 1. sum of the first succesion:
    // 0 + 1 + 4 + 9 + 16
    // 
    // Getting the n term: n*n
    // 
    // Getting the sum of the n terms:
    // 
    // SSn = S0 + S1 + ... + Sn-1 + Sn
    // 

    while(n++ < limit) {
        sum1 += n*n;
    }
    printf("The sum of the first succession is %ld\n", sum1);

    // 2. sum of the second aritmetic succesion, squared.
    // (0 + 1 + 2 + 3 + 4 + ... + n) ^ 2
    // 
    // (Sn) ^ 2
    // Sn = n (a1 + an) * 0.5f
    // 

    sum2 = getSumAritmetic(limit, 1, limit);
    printf("The sum of the second succession is %ld\n", sum2);

    // square it 

    sum2Squared = sum2 * sum2;
    printf("The sum of the second succession squared is %ld\n", sum2Squared);


    // result 
    printf("The answer is %ld\n", sum2Squared - sum1);

}
