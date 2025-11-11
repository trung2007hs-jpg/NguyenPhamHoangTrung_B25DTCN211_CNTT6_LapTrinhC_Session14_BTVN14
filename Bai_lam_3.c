#include <stdio.h>
float sum(float a, float b) {
    float sum = a + b;
    return sum;
}
int main() {
    float x = 5.6, y = 3.4;
    float result;
    result = sum(x, y);
    printf("Tong cua %.2f va %.2f la: %.2f\n", x, y, result);
    return 0;
}

