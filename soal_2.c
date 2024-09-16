#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];

    scanf("%s", &s1);
    scanf("%s", &s2);

    if (strcmp(s1, s2) == 0) {
        printf("IDENTIK");
    } else if (strlen(s1) == strlen(s2)) {
        printf("MIRIP");
    } else {
        printf("BERBEDA");
    }

    return 0;
}
