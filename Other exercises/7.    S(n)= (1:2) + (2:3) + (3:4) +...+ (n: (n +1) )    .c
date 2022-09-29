// S(n)= (1/2) + (2/3) + (3/4) +...+ (n/ (n + 1) )


#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	float sum = 0;

	do
	{
		printf("Enter a number = ");
		scanf("%d", &n);
		if (n < 1)
			printf("Eror /n");
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		sum += (float) i / (i + 1);
	}

	printf("S(%d) = %.2f  \n", n, sum);
	return 0;
}
