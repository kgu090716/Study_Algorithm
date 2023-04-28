#include<stdio.h>
#include<string.h>
int dat[10000005];
int pos = 0;
char string[4000020] = "";
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

int main(){
    int cnt = 1;
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int t;
        scanf("%d", &t);
        while(cnt <= t)
        {
            push(cnt++);
            strcat(string, "+\n");
        }
        if(top() != t)
        {
            printf("NO\n");
            return 0;
        }
        pop();
        strcat(string, "-\n");
    }
    printf("%s", string);
    return 0;
}
