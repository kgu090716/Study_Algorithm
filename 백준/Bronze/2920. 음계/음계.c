#include <stdio.h>
#include <string.h>

int main()
{
	int arr[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 7; i++)
	{
		if (arr[i + 1] - arr[i] == 1)
			cnt++;
		else if (arr[i + 1] - arr[i] == -1)
			cnt--;
	}
	if (cnt == 7)
		printf("ascending");
	else if (cnt == -7)
		printf("descending");
	else
		printf("mixed");
	return 0;
}