// S(n)= 1 + 2 + 3 +...+ n

#include <stdio.h>
#include <math.h>

int main () {
    int n, sum=0;

    do {
	printf("Enter a number = ");
	scanf("%d", &n);
	if (n < 0)
		printf("Eror /n");
	} while (n < 1);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf ("S(%d) = %d \n", n, sum);
    return 0;
}
