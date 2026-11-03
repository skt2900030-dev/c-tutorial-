#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 8, 12, 16};
    
    // Size of the array
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d", size);
    return 0;
}
