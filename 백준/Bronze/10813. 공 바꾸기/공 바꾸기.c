#include <stdio.h>
#include <string.h>

int main(void)
{
	int basket[100];
	int N, M, k, j;
	int temp;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		basket[i] = i + 1;
	}
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &k, &j);
		temp = basket[k - 1];
		basket[k - 1] = basket[j - 1];
		basket[j - 1] = temp;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d ", basket[i]);
	}
	return 0;
}