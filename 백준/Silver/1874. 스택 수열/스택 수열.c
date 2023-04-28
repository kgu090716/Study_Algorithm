#include<stdio.h>
#include<string.h>
int dat[10000005];
int pos = 0;
char res[400010] = "";
int arr[100005];
void push(int x)
{
    dat[pos++] = x;
}

void pop() {
    pos--;
}

int top() {
    return dat[pos - 1];
}

int main() {
    int N;
    int j = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= N; i++)
    {
        push(i);
        strcat(res, "+\n");
        while (dat[pos-1] == arr[j] && N>j)
        {
            pop();
            strcat(res, "-\n");
            j++;
        }
    }
    if (N == j)
        printf("%s", res);
    else
        printf("NO");
    return 0;
}
