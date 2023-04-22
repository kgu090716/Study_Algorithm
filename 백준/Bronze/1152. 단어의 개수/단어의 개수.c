#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000002];
	int i = 0;
	int cnt = 0;
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			cnt++;
		i++;
	}
	if (str[0] == ' ')
		cnt--;
	if (str[i - 2] == ' ')
		cnt--;
	printf("%d", cnt+1);
	return 0;
}