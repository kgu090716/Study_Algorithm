#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[10];
	int count[42];
	int sum = 10;
	for (int i = 0; i < 42; i++)
		count[i] = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		int idx = arr[i];
		count[idx] += 1;
	}
	for (int i = 0; i < 42; i++)
		if (count[i] > 1)
			sum = sum - count[i] + 1;
	printf("%d", sum);
	return 0;
}