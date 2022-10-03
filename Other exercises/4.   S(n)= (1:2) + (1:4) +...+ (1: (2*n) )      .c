//  S(n)= (1/2) + (1/4) +...+ (1/ (2*n) )

#include <stdio.h>

int main()
{
	int n;
	float sum = 0;

	do
	{
		printf("Enter a number = ");
		scanf("%d", &n);
		if (n < 1)
			printf("Eror \n");
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / (2*i);
	}

	printf("S(%d) = %.2f  \n", n, sum);
	return 0;
}
