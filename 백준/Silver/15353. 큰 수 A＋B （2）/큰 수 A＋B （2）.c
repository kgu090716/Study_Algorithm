#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PLUS 1
#define MINUS -1
#define ZERO 0

char tmpa[10000];
char tmpb[10000];

typedef struct
{
    int digits; // number of digits (i.e., length of num array)
    char *num;  // all digits as a string
    int sign;   // PLUS or MINUS
} BigInt;

void scanfLine(char *str);
void checkSign(BigInt *, char *);
void duplicateArr(BigInt *, char *);
void printStructure(BigInt);
int max(int, int);
void swap(char *, char *);
void convenienceSwap(BigInt *, int);
BigInt plus(BigInt *, BigInt *);
BigInt minus(BigInt *, BigInt *);
BigInt multi(BigInt *, BigInt *);
BigInt plusFunction(BigInt *a, BigInt *b, BigInt (*plus)(BigInt *, BigInt *), BigInt (*minus)(BigInt *, BigInt *));
BigInt minusFunction(BigInt *a, BigInt *b, BigInt (*plus)(BigInt *, BigInt *), BigInt (*minus)(BigInt *, BigInt *));
BigInt multiFunction(BigInt *a, BigInt *b, BigInt (*multi)(BigInt *, BigInt *));

void printmaxStructure(BigInt a, int maxsize)
{
    printf("자리수 : %d\n", a.digits);
    for (int i = 0; i < maxsize; i++)
        printf("%d ", a.num[i]);
    printf("\n");
}

void imsiprintStructure(BigInt a)
{
    printf("자리수 : %d\n", a.digits);
    for (int i = 0; i < a.digits; i++)
        printf("%d ", a.num[i]);
    printf("\n");
}

void printStructure(BigInt a)
{
    if (a.sign == MINUS)
    {
        printf("%c", '-');
        for (int i = 0; i < a.digits; i++)
            printf("%d", a.num[i]);
        printf("\n");
        return;
    }
    else if (a.sign == PLUS)
    {
        for (int i = 0; i < a.digits; i++)
            printf("%d", a.num[i]);
        printf("\n");
        return;
    }
    else
    {
        printf("0\n");
        return;
    }
}

void printSign(BigInt a)
{
    if (a.sign == PLUS)
        printf("양수입니다.\n");
    else if(a.sign == ZERO)
        printf("0입니다.");
    else
        printf("음수입니다.\n");
}

int main(void)
{
    int maxsize;
    BigInt a, b;

    // scanfLine(tmpa);
    scanf("%s", tmpa);
    a.digits = strlen(tmpa);
    checkSign(&a, tmpa);

    // scanfLine(tmpb);
    scanf("%s", tmpb);
    b.digits = strlen(tmpb);
    checkSign(&b, tmpb);

    maxsize = max(a.digits, b.digits);

    a.num = (char *)calloc(maxsize, sizeof(char));
    duplicateArr(&a, tmpa);
    b.num = (char *)calloc(maxsize, sizeof(char));
    duplicateArr(&b, tmpb);

    if (a.digits < b.digits)
        convenienceSwap(&a, maxsize);
    else
        convenienceSwap(&b, maxsize);

    BigInt plusres = plusFunction(&a, &b, plus, minus);
    // BigInt minusres = minusFunction(&a, &b, plus, minus);
    // BigInt multires = multiFunction(&a, &b, multi);
    // printmaxStructure(a, maxsize);
    // printmaxStructure(b, maxsize);

    printStructure(plusres);
    // printSign(plusres);

    // printStructure(minusres);
    // printSign(minusres);
    // printmaxStructure(multires, 20);

    // printStructure(multires);

    if (a.sign != ZERO && b.sign != ZERO)
    {
        free(a.num);
        free(b.num);
        free(plusres.num);
        // free(minusres.num);
        // free(multires.num);
    }
    return 0;
}

void scanfLine(char *str)
{
    int a, i = 0;
    while (1)
    {
        a = getchar();
        if (a == '\n' || a == '\r')
            break;
        str[i] = a;
        i++;
    }
    return;
}

void checkSign(BigInt *a, char *tmp)
{
    if (tmp[0] == '-')
    {
        a->sign = MINUS;
        (a->digits)--;
    }
    else if (tmp[0] == '0')
        a->sign = ZERO;
    else
        a->sign = PLUS;
}

void duplicateArr(BigInt *a, char *tmp)
{
    if ((a->sign) == MINUS)
    {
        for (int i = 1; i < a->digits + 1; i++)
        {
            a->num[i - 1] = tmp[i] - '0';
        }
    }
    else
    {
        for (int i = 0; i < a->digits; i++)
        {
            a->num[i] = tmp[i] - '0';
        }
    }
}

int max(int a, int b)
{
    return a > b ? a : b;
}

void swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void convenienceSwap(BigInt *a, int maxsize)
{
    int j = 0;
    for (int i = (a->digits) - 1; i >= 0; i--)
    {
        swap(&(a->num[i]), &(a->num[maxsize - j - 1]));
        j++;
    }
}

BigInt plus(BigInt *a, BigInt *b)
{
    int maxlen = max(a->digits, b->digits);
    int tmp = 0;
    int carry = 0;
    BigInt plusres;
    plusres.num = (char *)calloc(maxlen + 1, sizeof(char));

    for (int i = 0; i < maxlen; i++)
    {
        tmp = a->num[maxlen - i - 1] + b->num[maxlen - i - 1] + carry;
        carry = 0;
        if (tmp >= 10)
        {
            carry = 1;
            tmp -= 10;
        }
        plusres.num[i] += tmp;
    }

    if (carry == 1)
    {
        plusres.digits = maxlen + 1;
        plusres.num[maxlen] = carry;
    }
    else
        plusres.digits = maxlen;
    for (int i = 0; i < plusres.digits / 2; i++)
        swap(&plusres.num[i], &plusres.num[plusres.digits - i - 1]);
    return plusres;
}

BigInt minus(BigInt *a, BigInt *b)
{
    int maxlen = max(a->digits, b->digits);
    int tmp = 0;
    int fall = 0;
    BigInt minusres;
    minusres.num = (char *)calloc(maxlen, sizeof(char));

    for (int i = 0; i < maxlen; i++)
    {
        tmp = a->num[maxlen - i - 1] - b->num[maxlen - i - 1] - fall;
        fall = 0;
        if (tmp < 0)
        {
            fall = 1;
            tmp += 10;
        }
        minusres.num[i] += tmp;
    }

    for (int i = 0; i <= maxlen; i++)
    {
        _Bool tf = 0;
        if (minusres.num[i] == 0)
        {
            minusres.digits = i;
            for (int j = i + 1; j < maxlen; j++)
            {
                if (minusres.num[j] != 0)
                {
                    tf = 1;
                    break;
                }
            }
            if (tf == 0)
                break;
        }
    }
    for (int i = 0; i < minusres.digits / 2; i++)
        swap(&minusres.num[i], &minusres.num[minusres.digits - i - 1]);
    return minusres;
}

BigInt multi(BigInt *a, BigInt *b)
{
    int maxlen = max(a->digits, b->digits);
    // BigInt multires;
    // multires.num = (int *)calloc(maxlen * 2, sizeof(int));
    BigInt multires;
    int *tmpres = (int *)calloc(maxlen * 2, sizeof(int));
    int k = 0;
    int tmp = 0;
    int carry = 0;
    for (int i = maxlen - 1; i >= maxlen - b->digits; i--)
    {
        carry = 0;
        k = maxlen - i - 1;
        for (int j = maxlen - 1; j >= maxlen - a->digits; j--)
        {
            tmp = a->num[j] * b->num[i] + carry;
            carry = 0;
            if (tmp >= 10)
            {
                carry = tmp / 10;
                tmp %= 10;
            }
            tmpres[k] += tmp;
            k++;
        }
        if (carry > 0)
            tmpres[k] += carry;
    }

    for (int i = 0; i <= maxlen * 2; i++)
    {
        _Bool tf = 0;
        if (tmpres[i] == 0)
        {
            multires.digits = i;
            for (int j = i + 1; j <= maxlen * 2; j++)
            {
                if (tmpres[j] != 0)
                {
                    tf = 1;
                    break;
                }
            }
            if (tf == 0)
                break;
        }
    }
    carry = 0;
    for (int i = 0; i <= multires.digits; i++)
    {
        tmpres[i] += carry;
        carry = 0;
        if (tmpres[i] >= 10)
        {
            carry = tmpres[i] / 10;
            tmpres[i] %= 10;
        }
    }
    if (carry > 0)
    {
        multires.digits = multires.digits + 1;
        tmpres[multires.digits] = carry;
    }
    multires.num = (char *)calloc(maxlen * 2, sizeof(char));
    for (int i = 0; i < multires.digits; i++)
    {
        multires.num[i] = tmpres[i];
    }
    free(tmpres);
    for (int i = 0; i < multires.digits / 2; i++)
        swap(&multires.num[i], &multires.num[multires.digits - i - 1]);
    return multires;
}

BigInt plusFunction(BigInt *a, BigInt *b, BigInt (*plus)(BigInt *, BigInt *), BigInt (*minus)(BigInt *, BigInt *))
{
    BigInt tmp;
    if (a->sign == ZERO)
    {
        tmp.digits = b->digits;
        tmp.num = b->num;
        tmp.sign = b->sign;
        return tmp;
    }
    if (b->sign == ZERO)
    {
        tmp.digits = a->digits;
        tmp.num = a->num;
        tmp.sign = a->sign;
        return tmp;
    }
    if (a->sign == PLUS && b->sign == PLUS)
    {
        tmp = plus(a, b);
        tmp.sign = PLUS;
        return tmp;
    }
    if (a->sign == PLUS && b->sign == MINUS)
    {
        if (a->digits > b->digits)
        {
            tmp = minus(a, b);
            tmp.sign = PLUS;
            return tmp;
        }
        else if (a->digits < b->digits)
        {
            tmp = minus(b, a);
            tmp.sign = MINUS;
            return tmp;
        }
        else
        {
            if (strcmp(a->num, b->num) > 0)
            {
                tmp = minus(a, b);
                tmp.sign = PLUS;
                return tmp;
            }
            else if (strcmp(a->num, b->num) < 0)
            {
                tmp = minus(b, a);
                tmp.sign = MINUS;
                return tmp;
            }
            else
            {
                tmp = minus(a, b);
                tmp.sign = ZERO;
                return tmp;
            }
        }
    }
    if (a->sign == MINUS && b->sign == PLUS)
    {
        if (a->digits > b->digits)
        {
            tmp = minus(a, b);
            tmp.sign = MINUS;
            return tmp;
        }
        else if (a->digits < b->digits)
        {
            tmp = minus(b, a);
            tmp.sign = PLUS;
            return tmp;
        }
        else
        {
            if (strcmp(a->num, b->num) > 0)
            {
                tmp = minus(a, b);
                tmp.sign = MINUS;
                return tmp;
            }
            else if (strcmp(a->num, b->num) < 0)
            {
                tmp = minus(b, a);
                tmp.sign = PLUS;
                return tmp;
            }
            else
            {
                tmp = minus(a, b);
                tmp.sign = ZERO;
                return tmp;
            }
        }
    }
    if (a->sign == MINUS && b->sign == MINUS)
    {
        tmp = plus(a, b);
        tmp.sign = MINUS;
        return tmp;
    }
}

BigInt minusFunction(BigInt *a, BigInt *b, BigInt (*plus)(BigInt *, BigInt *), BigInt (*minus)(BigInt *, BigInt *))
{
    BigInt tmp;
    if (a->sign == ZERO)
    {
        tmp.digits = b->digits;
        tmp.num = b->num;
        if (b->sign == MINUS)
            tmp.sign = PLUS;
        else if (b->sign == PLUS)
            tmp.sign = MINUS;
        else
            tmp.sign = ZERO;
        return tmp;
    }
    if (b->sign == ZERO)
    {
        tmp.digits = a->digits;
        tmp.num = a->num;
        tmp.sign = a->sign;
        return tmp;
    }
    if (a->sign == PLUS && b->sign == PLUS)
    {
        if (a->digits > b->digits)
        {
            tmp = minus(a, b);
            tmp.sign = PLUS;
            return tmp;
        }
        else if (a->digits < b->digits)
        {
            tmp = minus(b, a);
            tmp.sign = MINUS;
            return tmp;
        }
        else
        {
            if (strcmp(a->num, b->num) > 0)
            {
                tmp = minus(a, b);
                tmp.sign = PLUS;
                return tmp;
            }
            else if (strcmp(a->num, b->num) < 0)
            {
                tmp = minus(b, a);
                tmp.sign = MINUS;
                return tmp;
            }
            else
            {
                tmp = minus(a, b);
                tmp.sign = ZERO;
                return tmp;
            }
        }
    }
    if (a->sign == PLUS && b->sign == MINUS)
    {
        tmp = plus(a, b);
        tmp.sign = PLUS;
        return tmp;
    }
    if (a->sign == MINUS && b->sign == PLUS)
    {
        tmp = plus(a, b);
        tmp.sign = MINUS;
        return tmp;
    }
    if (a->sign == MINUS && b->sign == MINUS)
    {
        if (a->digits > b->digits)
        {
            tmp = minus(a, b);
            tmp.sign = MINUS;
            return tmp;
        }
        else if (a->digits < b->digits)
        {
            tmp = minus(b, a);
            tmp.sign = PLUS;
            return tmp;
        }
        else
        {
            if (strcmp(a->num, b->num) > 0)
            {
                tmp = minus(a, b);
                tmp.sign = MINUS;
                return tmp;
            }
            else if (strcmp(a->num, b->num) < 0)
            {
                tmp = minus(b, a);
                tmp.sign = PLUS;
                return tmp;
            }
            else
            {
                tmp = minus(a, b);
                tmp.sign = ZERO;
                return tmp;
            }
        }
    }
}

BigInt multiFunction(BigInt *a, BigInt *b, BigInt (*multi)(BigInt *, BigInt *))
{
    BigInt tmp;
    if (a->sign == ZERO)
    {
        tmp.digits = a->digits;
        tmp.num = a->num;
        tmp.sign = a->sign;
        return tmp;
    }
    if(b->sign == ZERO)
    {
        tmp.digits = b->digits;
        tmp.num = b->num;
        tmp.sign = b->sign;
        return tmp;
    }
    tmp = multi(a, b);
    if (a->sign == PLUS && b->sign == PLUS)
    {
        tmp.sign = PLUS;
        return tmp;
    }
    if (a->sign == PLUS && b->sign == MINUS)
    {
        tmp.sign = MINUS;
        return tmp;
    }
    if (a->sign == MINUS && b->sign == PLUS)
    {
        tmp.sign = MINUS;
        return tmp;
    }
    if (a->sign == MINUS && b->sign == MINUS)
    {
        tmp.sign = PLUS;
        return tmp;
    }
}