#include <stdio.h>

int main()
{
	int N, arr[100], count = 0, v;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == v)
			count++;
	}
	printf("%d", count);
	return 0;
}