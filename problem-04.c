/*
Largest palindrome product
Problem 4:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 999
#define MIN 100
#define MAX_DIGITS 6
#define HALF_LENGTH (MAX_DIGITS / 2)

int main(void){

    int solution = 0;

    for(int i = MIN; i <= MAX; i++){
        for(int j = MIN; j <= MAX; j++){
            char aux[MAX_DIGITS];
            sprintf(aux, "%d", i * j);
            char *firstHalf = malloc(sizeof(char) * HALF_LENGTH);
            char *secondHalf = malloc(sizeof(char) * HALF_LENGTH);
            char *reversedFirstHalf = malloc(sizeof(char) * HALF_LENGTH);
            strncpy(firstHalf, aux, HALF_LENGTH);
            strncpy(secondHalf, aux, MAX_DIGITS);
            secondHalf += HALF_LENGTH;
            int m = 0;
            for(int k = HALF_LENGTH-1; k >= 0; k--){
                aux[m] = firstHalf[k];
                m++;
            }
            strncpy(reversedFirstHalf, aux, HALF_LENGTH);
            if(!strcmp(reversedFirstHalf, secondHalf) && (i * j > solution)){
                solution = i * j;
            }
            printf("%d * %d: %s %s, %s\n", i, j, firstHalf, secondHalf, reversedFirstHalf);
        }
    }
    printf("Solution: %d\n", solution);

    return 0;
}
