#include <stdio.h>

int ishappy(int num) {
    int sum = 0, rem = 0;
    while (num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem);
        num = num / 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num;
    while (result != 1 && result != 4) {
        result = ishappy(result);
    }

    if (result == 1)
        printf("happy\n");
    else
        printf("not happy\n");

    return 0;
}
