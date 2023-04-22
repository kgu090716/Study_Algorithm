#include <stdio.h>

int findsame_count(int num1, int num2, int num3)
{
	int count=0;
	if (num1 == num2)
		count++;
	if (num2 == num3)
		count++;
	if (num1 == num3)
		count++;
	return count;
}

int findsame(int num1, int num2, int num3)
{
	int same;
	if (num1 == num2)
		same = num2;
	if (num2 == num3)
		same = num3;
	if (num1 == num3)
		same = num1;
	return same;
}

int findmax(int num1, int num2, int num3)
{
	int max = num1;
	if (max < num2)
		max = num2;
	if (max < num3)
		max = num3;
	return max;
}

int main(void)
{
	int num1, num2, num3;
	int same;
	scanf("%d %d %d", &num1, &num2, &num3);
	same = findsame_count(num1, num2, num3);
	if (same == 3)
	{
		printf("%d", 10000 + findsame(num1, num2, num3)*1000);
	}
	else if (same == 1)
	{
		printf("%d", 1000 + findsame(num1, num2, num3) * 100);
	}
	else
	{
		printf("%d", findmax(num1, num2, num3) * 100);
	}
	return 0;
}