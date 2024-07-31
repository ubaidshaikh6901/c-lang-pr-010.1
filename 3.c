#include <stdio.h>
int main(){
    int num, f_digit, l_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    while (num >= 10) {
        num = num/10;
    }
    f_digit = num;
    l_digit = num % 10;

    sum = f_digit + l_digit;
    printf("First digit: %d\n", f_digit);
    printf("Last digit: %d\n", l_digit);
    printf("Sum of first and last digits: %d\n", sum);
    return 0;
}