#include <stdio.h>
int arr[100000];
int main(void)
{
    int N;
    int B;
    int i = 0;
    scanf("%d", &N);
    scanf("%d", &B);
    while(N/B != 0)
    {
        arr[i] = N % B;
        N = N/B;
        i++;
    }
    arr[i++] = N%B;
    for(;i>0;i--)
    {
        if(arr[i-1] < 10)
            printf("%d", arr[i-1]);
        else
            printf("%c", arr[i-1] + 55);
    }
    return 0;
}