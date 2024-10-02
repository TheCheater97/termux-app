#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series 1 + 2 + 3 + ... + n
    for (int i = 1; i <= n; i++) {
        sum += i;  // Add i to sum
    }

    // Output the sum
    printf("The sum of the series is: %d\n", sum);

    return 0;
}
