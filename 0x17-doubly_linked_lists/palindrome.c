#include <stdio.h>

int isPalindrome(int num) {
    int reverse = 0, original = num;
    while (num > 0) {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    return reverse == original;
}

int main() {
    int largest_palindrome = 0;
    int i, j;

    for (i = 100; i < 1000; i++) {
        for (j = i; j < 1000; j++) {
            int product = i * j;
            if (product > largest_palindrome && isPalindrome(product)) {
                largest_palindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", largest_palindrome);
    fclose(file);

    return 0;
}

