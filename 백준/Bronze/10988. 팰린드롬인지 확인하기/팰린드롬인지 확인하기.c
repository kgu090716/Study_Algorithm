#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[101];
	int len;
	int cnt = 1;
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i <= len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			cnt = 0;
			break;
		}
	}
	printf("%d", cnt);
	return 0;
}