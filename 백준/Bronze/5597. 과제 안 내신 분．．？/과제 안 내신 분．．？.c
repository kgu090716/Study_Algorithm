#include <stdio.h>
#include <string.h>

int main(void)
{
	int stu[28];
	int num[30];
	for (int i = 0; i < 30; i++)
	{
		num[i] = 0;
	}

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &stu[i]);
		num[stu[i] - 1]++;
	}

	for (int i = 0; i < 30; i++)
	{
		if (num[i] == 0)
			printf("%d\n", i + 1);
	}
	return 0;
}