#include<stdio.h>

int main(void)
{
	int arr[7];
	int sum = 0;
	int i = 0;
	int min;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 7; i++)
	{
		if (arr[i] % 2 == 1)
		{
			sum += arr[i];
			min = arr[i];
		}
	}

	if (sum == 0)
		printf("-1\n");
	else
	{
		printf("%d\n", sum);

		for (i = 0; i < 7; i++)
		{
			if (arr[i] % 2 == 1)
				min = min < arr[i] ? min : arr[i];
		}
		printf("%d\n", min);
	}
	
	return 0;
}