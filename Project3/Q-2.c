#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

   
    if (num < 0) {
        num = -num; 
    }

    int digits = countDigits(num);

   
    if (num == 0) {
        digits = 1;
    }

    printf("Total number of digits: %d\n", digits);

    return 0;
}