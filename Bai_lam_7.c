#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int num = 13;
    if (isPrime(num))
        printf("%d la so nguyen to\n", num);
    else
        printf("%d khong phai la so nguyen to\n", num);
    return 0;
}

