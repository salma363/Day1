#include <stdio.h>

void main() {
    int n, i, fact = 1;
    printf("Entrez un nombre positif : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %d\n", n, fact);
}

