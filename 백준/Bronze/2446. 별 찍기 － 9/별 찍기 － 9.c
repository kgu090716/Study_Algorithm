#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int k = 0; k < (2 * i) - 1; k++)
			printf("*");
		printf("\n");
	}

	for (int i = 2; i <= n; i++)
	{
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int k = 0; k < (2 * i) - 1; k++)
			printf("*");
		printf("\n");
	}
}