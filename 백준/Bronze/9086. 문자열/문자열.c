#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	int len;
	char str[1001];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", str);
		len = strlen(str);
		printf("%c%c\n", str[0], str[len - 1]);
	}
	return 0;
}