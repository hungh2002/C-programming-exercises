// S(n)= 1 + 1*2 + 1*2*3 +...+ 1*2*3*...*n

#include<stdio.h>

int main()
{
    int n;
    unsigned int x= 1, sum= 0;
    do
    {
        printf("Enter a number:  ");
        scanf("%d", &n);
        if(n < 1) printf ("Error! \n");
    } while(n < 1);
    
    for (int i=1; i <= n; i++) {
         x *= i;
         sum += x;	
    }
    
    printf("S(%d)= %d",n, sum);

    return 0;
}
