#include <stdio.h>

int computeMultiplesSum(int n)
{
    int sum = 0;
    printf("Saisissez un nombre entier: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if( i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum +=i;
        }
    }
    int result = computeMultiplesSum(n);
    printf("La somme des multiples de 3, 5, ou 7 strictement inferieurs à %d est: %d/n", n, result);
    return 0;
}