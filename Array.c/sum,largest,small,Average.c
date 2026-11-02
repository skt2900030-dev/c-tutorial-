#include <stdio.h>

int main() {
    int arr[] = {45, 82, 67, 91, 58};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.1f\n", (float) sum / n);
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
