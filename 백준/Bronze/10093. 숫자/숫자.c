#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	if (a == b)
		printf("0");
	else
	{
		printf("%d\n", b - a - 1);
		for (int i = a + 1; i < b; i++)
		{
			printf("%d ", i);
		}
	}
}