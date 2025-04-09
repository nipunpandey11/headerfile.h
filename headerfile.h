#include <stdio.h>

// ----- mymath.h START -----
#ifndef MYMATH_H
#define MYMATH_H

void printFactors(int n);
int countDigits(int n);
int isPerfect(int n);

#endif
// ----- mymath.h END -----


// ----- mymath.c START -----
void printFactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int countDigits(int n) {
    int count = 0;
    if (n == 0)
        return 1;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
// ----- mymath.c END -----


// ----- main.c START -----
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d: ", n);
    printFactors(n);

    printf("Number of digits in %d: %d\n", n, countDigits(n));

    if (isPerfect(n))
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);

    return 0;
}
// ----- main.c END -----
