/*
Summation of primes
Problem 10:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/ 

#include <stdio.h>

#define MAX 2000000
#define IS_PRIME(x) (x == 2)

unsigned long long int solve(int from, int to);

int main(void){
    printf("Solution: %llu\n", solve(2, (MAX/2)+1) + solve((MAX/2)+1, MAX));
    return 0;
}

unsigned long long int solve(int from, int to){
    int primeChecker = 0;
    unsigned long long int accum = 0;
    while(from < to){
        for(int i = 1; i <= from; i++){
            if(from % i == 0){
                primeChecker++;
            }
        }
        if(IS_PRIME(primeChecker)){
            accum += from;
            printf("%d\n", from);
        }
        from++;
        primeChecker = 0;
    }
    return accum;
}

/*
142913828922
*/
