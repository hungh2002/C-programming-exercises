// S(n) = (1^2) + (2^2) + (3^2) + … + (n^2)

#include <stdio.h>
#include <math.h>

int main () {
    int n;
    unsigned int sum=0;

    do {
	printf("Enter a number = ");
	scanf("%d", &n);
	if (n < 1)
		printf("Eror \n");
	} while (n < 1);

    for (int i = 1; i <= n; i++) {
        sum += pow (i,2);
    }
    printf ("S(%d) = %d \n", n, sum);
    return 0;
}
