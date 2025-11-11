#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int numbers[6] = {3, 9, 2, 8, 15, 6};
    int size = 6;
    int max = findMax(numbers, size);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0;
}

