#include<stdio.h>

void Sort(int arr[])
{
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d \n", (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5);
	Sort(arr);
	printf("%d", arr[2]);
	return 0;
}