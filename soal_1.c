#include <stdbool.h>
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int nilai[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &nilai[i]);
    }

    int i, j;
    bool swapped;
    for (i = 0; i < a - 1; i++) {
        swapped = false;
        for (j = 0; j < a - i - 1; j++) {
            if (nilai[j] > nilai[j + 1]) {
                int temp;
                temp = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = temp;
                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }

    for (int i = 0; i < a; i++) {
        printf("%d \n", nilai[i]);
    }

    return 0;
}