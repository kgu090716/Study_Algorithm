#include <stdio.h>
arr[1000000];
int main()
{
	int N;
	int max, min;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	max = arr[0];
	for (int i = 0; i < N; i++)
	{
		max = arr[i] > max ? arr[i] : max;
	}
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		min = arr[i] < min ? arr[i] : min;
	}
	printf("%d %d", min, max);
	return 0;
}