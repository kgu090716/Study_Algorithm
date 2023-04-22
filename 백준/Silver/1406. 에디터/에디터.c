#include <stdio.h>
#include <string.h>

const int MX = 1000005;
char dat[1000005];
int pre[1000005], nxt[1000005];
int unused = 1;

void insert(int addr, int num)
{
	dat[unused] = num;
	pre[unused] = addr;
	nxt[unused] = nxt[addr];
	if(nxt[addr] != -1)
		pre[nxt[addr]] = unused;
	nxt[addr] = unused;
	unused++;
}

void erase(int addr)
{
	nxt[pre[addr]] = nxt[addr];
	if(nxt[addr] != -1)
		pre[nxt[addr]] = pre[addr];
}

void traverse() {
	int cur = nxt[0];
	while(cur != -1)
	{
		printf("%c", dat[cur]);
		cur = nxt[cur];
	}
	printf("\n\n");
}
int main(void)
{
	int M;
	char str[100002];
	int len;
	char edit;
	int cursor;

	for(int i = 0; i < MX; i++)
	{
		pre[i] = -1;
		nxt[i] = -1;
	}
	
	scanf("%s", str);
	len = strlen(str);
	cursor = len;
	for(int i = 0; i<len; i++)
		insert(i, str[i]);

	scanf("%d", &M);
	for(int i = 0; i < M; i++)
	{
		scanf(" %c", &edit);
		if(edit == 'L')
		{
			if(pre[cursor] != -1)
				cursor = pre[cursor];
		}
		if(edit == 'D')
		{
			if(nxt[cursor] != -1)
				cursor = nxt[cursor];
		}
		if(edit == 'B')
		{
			if(cursor != 0)
			{
				erase(cursor);
				cursor=pre[cursor];
			}
		}
		if(edit == 'P')
		{
			char input;
			scanf(" %c", &input);
			insert(cursor, input);
			cursor = nxt[cursor];
		}
	}
	traverse();
    return 0;
}
