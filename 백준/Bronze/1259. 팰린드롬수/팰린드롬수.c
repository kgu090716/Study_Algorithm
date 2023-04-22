#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr[100000];
    int len;
    int tf;
    while(1)
    {
        tf = 1;
        scanf("%s", arr);
        if(arr[0] != '0')
        {
            len = strlen(arr);
            for(int i = 0; i < len/2; i++)
            {
                if(arr[i] != arr[len-i-1])
                    tf = 0;
            }
            if(tf)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
            return 0;
    }   
}