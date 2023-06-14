#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    int i, tmp, fib=1, fib_p = 0;
    if(n<=1)
        return n;
    for(i=2; i<=n; i++)
    {
        tmp = fib;
        fib+=fib_p;
        fib_p = tmp;
    }
    return fib;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << fibo(n) << '\n';
    return 0;
}