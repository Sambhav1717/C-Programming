#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int isPalindrome(int num) {
    int original = num;
    int reversed = reverseNumber(num);
    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
