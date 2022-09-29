// S(n) = (1^2) + (2^2) + (3^2) + … + (n^2)

#include <stdio.h>
#include <math.h>

int main () {
    int n, sum=0;
    printf ("Enter a number = ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += pow (i,2);
    }
    printf ("S(%d) = %d \n", n, sum);
    return 0;
}
