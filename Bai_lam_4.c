#include <stdio.h>
void printarr(int arr[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int numbers[5] = {2, 4, 6, 8, 10};
    int size = 5; 
    printarr(numbers, size);
    return 0;
}

