// S(n) = (1^2) + (2^2) + (3^2) +...+ (n^2)

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float sum = 0;

    do {
	printf("Enter a number = ");
	scanf("%d", &n);
	if (n < 0)
		printf("Eror /n");
	} while (n < 0);

     for (int i = 1; i <= n; i++) {
		sum += 1.0 / i;
     }
     printf("S(%d) = %.2f  \n", n, sum);
     return 0;
}
