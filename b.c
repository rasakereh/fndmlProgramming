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

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
    return 0;   
}
