//  S(n)= 1 + (1/3) + (1/5) +...+ (1/ (2*n+1) )

#include <stdio.h>

int main()
{
	int n;
	float sum = 0;

	do
	{
		printf("Enter a number = ");
		scanf("%d", &n);
		if (n < 0)
			printf("Eror /n");
	} while (n < 0);

	for (int i = 0; i <= n; i++)
	{
		sum += 1.0 / (2*i + 1);
	}

	printf("S(%d) = %.2f  \n", n, sum);
	return 0;
}
