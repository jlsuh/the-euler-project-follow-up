/*
Smallest multiple
Problem 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

#define MIN 1
#define MAX 20

int main (void){
    
    int found = 0;
    int i = MAX-1;
    
    do{
        i++;
        int solutionChecker = 0;
        int j = MIN;
        while(j <= MAX){
            if(i % j == 0){
                solutionChecker++;
            }
            j++;
        }
        if(solutionChecker == MAX){
            found = 1;
        }
    }while(!found);
    
    printf("Solution: %d\n", i);
    
    return 0;
}
