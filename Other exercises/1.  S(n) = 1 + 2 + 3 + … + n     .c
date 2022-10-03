// S(n)= 1 + 2 + 3 +...+ n

#include <stdio.h>

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
        sum += i;
    }
    printf ("S(%d) = %d \n", n, sum);
    return 0;
}
