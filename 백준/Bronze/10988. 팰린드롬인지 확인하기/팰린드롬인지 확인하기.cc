#include <stdio.h>
char A[1002];
int main(void)
{
    int a;
    int cnt = 0;
    while((a = getchar()) != '\n')
    {
        if('A' <= a && a <= 'Z')
        {
            A[cnt] = a + ('a' - 'A'); // 대문자 to 소문자
            cnt++;
        }
        else if('a' <= a && a <= 'z')
        {
            A[cnt] = a;
            cnt++;
        }
        else
            continue;
    }
    for(int i = 0; i < cnt/2; i++)
    {
        if(A[i] != A[cnt-1-i])
        {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}