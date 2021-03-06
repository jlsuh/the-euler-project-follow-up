/*
10001st prime
Problem 7:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>

int main(void){
    
    int lastPrime = 0;
    int amountPrimes = 10001;
    int primeCheck = 0;
    int i = 2;
    
    while(amountPrimes > 0){
        int j = 1;
        while(j <= i){
            if(i % j == 0){
                primeCheck++;
            }
            j++;
        }
        if(primeCheck == 2){
            lastPrime = i;
            amountPrimes--;
        }
        i++;
        primeCheck = 0;
        printf("Last prime: %d\n", lastPrime);
    }
    printf("\nSolution: %d\n", lastPrime);
    
    return 0;
}
