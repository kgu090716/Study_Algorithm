#include <stdio.h>

int main(void)
{
	int basket[100];
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);
	for (int p = 0; p < N; p++)
		basket[p] = 0;
	for (int p = 0; p < M; p++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int q = i; q <= j; q++)
		{
			basket[q-1] = k;
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d ", basket[i]);
	return 0;
}