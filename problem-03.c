/*
Largest prime factor
Problem 3:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/ 

#include <stdio.h>

#define IS_PRIME(x) (x == 2)

int main(void){
    
    unsigned long long int TARGET = 600851475143;
    int factor = 1;
    int primeIndex = 0;

    do{
        factor++;
        int primeChecker = 0;
        int j = 1;
        while(j <= factor){
            if(factor % j == 0){
                primeChecker++;
            }
            j++;
        }
        if(IS_PRIME(primeChecker)){
            if(TARGET % factor == 0){
                TARGET = TARGET / factor;
                primeIndex++;
            }
        }
    }while(TARGET != 1);

    printf("Solution: %llu\n", factor);
    return 0;
}

/*
600851475143 / 71 = 8462696833
8462696833 / 839 = 10086647
10086647 / 1471 = 6857
6857 / 6857 = 1
*/
