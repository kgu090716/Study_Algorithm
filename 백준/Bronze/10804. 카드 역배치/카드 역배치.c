#include <stdio.h>

int change_arr(int arr[], int section1, int section2)
{
	for (int i = 0; i < (section2 - section1+1) / 2; i++)
	{
		int temp;
		temp = arr[section1-1+i];
		arr[section1-1+i] = arr[section2-1-i];
		arr[section2-1-i] = temp;
	}
}

int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int section[10][2];
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			scanf("%d", &section[i][k]);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		change_arr(arr, section[i][0], section[i][1]);
	}
	
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr[i]);
	}
}