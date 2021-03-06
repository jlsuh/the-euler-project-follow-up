/*
Special Pythagorean triplet
Problem 9:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>

#define MAX 500

int square(int num);

int main(void){

    int a = 0;
    int b = 0;
    int c = 0;
    
     for(a = 1; a <= MAX; a++){
        for(b = 1; b <= MAX; b++){
            for(c = 1; c <= MAX; c++){
                if(a < b && b < c && (square(c) == square(a) + square(b))){
                    if(a + b + c == 1000){
                        printf("Solution: %d, %d, %d\n", a, b, c);
                        return 0;
                    }
                }
                printf("a: %d | b: %d | c: %d\n", a, b, c);
            }
        }
    }
    return 0;
}

int square(int num){
    return num * num;
}
