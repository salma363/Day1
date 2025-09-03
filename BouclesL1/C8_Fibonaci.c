#include<stdio.h>

void main()
{
    int n, i;
    int t1 = 0, t2 = 1, suivant;
    printf("Entrez le nombre de termes : ");
    scanf("%d", &n);

    printf("Suite de Fibonacci : ");
    for (i = 1; i <= n; i++) {
        printf("%d ", t1);
        suivant = t1 + t2;
        t1 = t2;
        t2 = suivant;
    }
}
