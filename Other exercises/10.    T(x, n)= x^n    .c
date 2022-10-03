// T(x, n)= x^n


#include <stdio.h>
#include <math.h>

int main()
{
	float x, n, T;
	
	printf ("x= "); scanf ("%f", &x);
	printf("n= "); scanf("%f", &n);
	
	T= pow (x,n);

	printf("T(%.2f, %.2f) = %.2f  \n", x, n, T);
	return 0;
}
