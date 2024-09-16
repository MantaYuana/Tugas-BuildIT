#include <stdio.h>

int main() {
    int a, prima = 0;
    scanf("%d", &a);

    if (a == 2 || a == 3) {
        prima = 1;
    } else if (a % 6 == 5 || a % 6 == 1) {
        prima = 1;
    }

    (prima == 1) ? printf("PRIMA") : printf("BUKAN");

    return 0;
}