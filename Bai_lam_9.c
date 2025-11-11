#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1 = 36, num2 = 60;
    int result = gcd(num1, num2);
    printf("UCLN cua %d va %d la: %d\n", num1, num2, result);
    return 0;
}

