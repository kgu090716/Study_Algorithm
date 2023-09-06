#include <bits/stdc++.h>
using namespace std;
int A[102];

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a, a);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> A[i];
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                sum += gcd(A[i], A[j]);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}