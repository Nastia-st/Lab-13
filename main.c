#include <stdio.h>

long long product(int a, int n) {
    if (n == 0)
        return a;
    else
        return (a + n) * product(a, n - 1);
}

int main() {
    system("chcp 65001");
    int a, n;
    printf("Введіть a: ");
    scanf("%d", &a);
    printf("Введіть n: ");
    scanf("%d", &n);
    
    long long p = product(a, n);
    printf("p = %lld\n", p);
    
    return 0;
}