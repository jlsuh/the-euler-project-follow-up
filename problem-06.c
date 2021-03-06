/*
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is.
3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

#define FIRST 1
#define LAST 100

int square(int num);
int sum(int from, int to);
int sum_of_squares(int from, int to);
int square_of_sum(int from, int to);

int main(void){
    
    printf("Sum of squares: %d\nSquare of sum: %d\n", sum_of_squares(FIRST, LAST), square_of_sum(FIRST, LAST));
    printf("Solution: %d\n", square_of_sum(FIRST, LAST) - sum_of_squares(FIRST, LAST) );
    
    return 0;
}

int square(int num){
    return num * num;
}

int sum(int from, int to){
    int res = 0;
    for(int i = from; i <= to; i++){
        res += i;
    }
    return res;
}

int sum_of_squares(int from, int to){
    if(from == to){
        return 1;
    }
    return square(to) + sum_of_squares(from, to-1);
}

int square_of_sum(int from, int to){
    int res = sum(from, to);
    return square(res);
}
