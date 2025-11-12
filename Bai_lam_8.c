#include <stdio.h>
int isPerfect(int n) {
    if (n < 1)
        return 0; 
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1; 
    else
        return 0;
}
int main() {
    int num1 = 6;
    int num2 = 12;

    if (isPerfect(num1))
        printf("%d la so hoan hao\n", num1);
    else
        printf("%d khong phai la so hoan hao\n", num1);
    if (isPerfect(num2))
        printf("%d la so hoan hao\n", num2);
    else
        printf("%d khong phai la so hoan hao\n", num2);
    return 0;
}

