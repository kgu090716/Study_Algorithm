#include <stdio.h>
#include <string.h>

char arr[1000001];

int main(void)
{
	int alphabet[26];
	int max = 0;
	int location;
	int cnt = 0;
	int len;
	scanf("%s", arr);
	for (int i = 0; i < 26; i++)
		alphabet[i] = 0;
	len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] += 'A' - 'a';
	}

	for (int i = 0; i < len; i++)
	{
		int idx = arr[i] - 'A';
		alphabet[idx] += 1;
	}
	max = 0;
	for (int i = 0; i < 26; i++)
		if (max < alphabet[i])
		{
			max = alphabet[i];
			location = i;
		}
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[location] == alphabet[i])
			cnt++;
	}
	if (cnt > 1)
		printf("?");
	else
		printf("%c", location + 65);
	return 0;
}