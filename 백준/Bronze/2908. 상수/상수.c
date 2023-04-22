#include <stdio.h>
#include <string.h>

void change(char num[])
{
	char temp;
	temp = num[0];
	num[0] = num[2];
	num[2] = temp;
}

int main()
{
	char num1[4], num2[4];
	int inum1, inum2;
	scanf("%s", num1);
	scanf("%s", num2);
	change(num1);
	change(num2);
	inum1 = atoi(num1);
	inum2 = atoi(num2);
	if (inum1 > inum2)
		printf("%d", inum1);
	else
		printf("%d", inum2);
	return 0;
}