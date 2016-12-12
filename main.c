#include <stdio.h>

int isPrime(int n)
{
	if(n <= 1)
		return 0;
	int i = 2;
	for(i = 2; i * i <= n; i++)
		if(n % i == 0)
			return 0;
	return 1;
}

void main()
{
	int a, b;
	printf("Hello World!");
	printf("\n Enter two nums:\t");
	scanf("%d%d", &a, &b);
	printf("\n%d + %d = %d\n", a, b, a+b);
}
