#include <stdio.h>
#include <string.h>

int main(void)
{
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}