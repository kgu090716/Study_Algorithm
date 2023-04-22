#include <stdio.h>

int main(void)
{
	int h, m, time;
	scanf("%d %d", &h, &m);
	scanf("%d", &time);
	if (m + time >= 60)
	{
		h += (m + time) / 60;
		m = (m + time) % 60;
	}
	else
	{
		m = m + time;
	}
	if (h >= 24)
	{
		h -= 24;
	}
	printf("%d %d", h, m);
	return 0;
}