#include <stdio.h>
void main() {
    int num, i, isPrime = 1; 
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) 
        {
            isPrime = 0;
            break;
        }
    }
    if (num <= 1) {
        printf("%d is not a prime number\n", num);
    }
    else {
        if (isPrime) {
            printf("%d is a prime number\n", num);
        } else {
            printf("%d is not a prime number\n", num);
        }
    }
}
