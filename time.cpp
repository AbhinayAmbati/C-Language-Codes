#include<stdio.h>

int main() {
    int n;
    int x;

    scanf("%d", &n);

    if (n > 12 || n < 24) {
        x = n - 12;
        printf("%d", x);
    } else {
        printf("%d", n);
    }

    return 0;
}
