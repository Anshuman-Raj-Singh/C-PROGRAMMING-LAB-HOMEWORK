#include <stdio.h>
int main() {
    int number;
    int reversed = 0;
    printf("Original number:");
    scanf("%d",&number);
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    printf("Number in reverse order: %d\n", reversed);
    return 0;
}
