// S(n)= (1/2) + (3/4) + (5/6) +...+  ( (2*n + 1)/ (2*n + 2) )


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
		sum += (float) (2*i + 1) / (2*i + 2);
	}

	printf("S(%d) = %.2f  \n", n, sum);
	return 0;
}
