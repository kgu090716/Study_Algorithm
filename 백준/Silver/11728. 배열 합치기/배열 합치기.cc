#include <bits/stdc++.h>
using namespace std;
int A[1000002];
int B[1000002];
int res[2000004];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A_len, B_len;
    int A_i = 0, B_i = 0;
    cin >> A_len >> B_len;
    for (int i = 0; i < A_len; i++)
        cin >> A[i];
    for (int i = 0; i < B_len; i++)
        cin >> B[i];
    while (A_i + B_i < A_len + B_len)
    {
        if (A_i >= A_len)
        {
            res[A_i + B_i] = B[B_i];
            B_i++;
        }
        else if (B_i >= B_len)
        {
            res[A_i + B_i] = A[A_i];
            A_i++;
        }
        else
        {
            if (A[A_i] < B[B_i])
            {
                res[A_i + B_i] = A[A_i];
                A_i++;
            }
            else
            {
                res[A_i + B_i] = B[B_i];
                B_i++;
            }
        }
    }
    for (int i = 0; i < A_len + B_len; i++)
    {
        cout << res[i] << ' ';
    }
    return 0;
}