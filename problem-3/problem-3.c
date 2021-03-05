/*
Largest prime factor
Problem 3:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/ 

#include <stdio.h>

#define IS_PRIME 2

int main(void){
    
    long long TARGET = 600851475143;
    long long largestPrimeFactor = 0;
    int found = 0;
    int primeChecker = 2;
    int i = TARGET;
    
    while(!found){
        for(int auxi = i/2; auxi >= 1; auxi = auxi / 2){
            if(i % auxi == 0){
                primeChecker++;
            }
        }
        if(primeChecker == IS_PRIME && TARGET % i == 0){
            found = 1;
            largestPrimeFactor = i;
        }
        i = i / 2;
        primeChecker = 0;
    }
    
    printf("Solution: %d\n", largestPrimeFactor);

    return 0;
}
