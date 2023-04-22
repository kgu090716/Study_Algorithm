#include <stdio.h>
#include <string.h>

int main()
{
	int N, temp;
	char arr[80];
	int sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		temp = 0;
		sum = 0;
		scanf("%s", arr);
		for (int k = 0; k < strlen(arr); k++)
		{
			if (arr[k] == 'O')
			{
				temp++;
				sum += temp;
			}
			else
			{
				temp = 0;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}