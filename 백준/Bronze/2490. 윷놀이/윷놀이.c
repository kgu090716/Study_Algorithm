#include<stdio.h>

void scanf_yut(int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void printf_yut(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}

	if (sum == 0)
		printf("D\n");
	else if (sum == 1)
		printf("C\n");
	else if (sum == 2)
		printf("B\n");
	else if (sum == 3)
		printf("A\n");
	else
		printf("E\n");
}

int main(void)
{
	int arr1[4], arr2[4], arr3[4];
	int sum = 0;
	scanf_yut(arr1);
	scanf_yut(arr2);
	scanf_yut(arr3);
	
	printf_yut(arr1);
	printf_yut(arr2);
	printf_yut(arr3);
	return 0;
}