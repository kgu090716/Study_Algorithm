#include<stdio.h>
#include<string.h>
int main(void)
{
    char arr[100];
    scanf("%s", arr);
    if(!strcmp(arr,"NLCS"))
    {
        printf("North London Collegiate School");
    }
    else if(!strcmp(arr,"BHA"))
    {
        printf("Branksome Hall Asia");
    }
    else if(!strcmp(arr,"KIS"))
    {
        printf("Korea International School");
    }
    else
        printf("St. Johnsbury Academy");
    return 0;
}