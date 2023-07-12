#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<int> primes;
    vector<bool> state(n+1, true);
    state[1] = false;
    for(int i = 2; i*i <= n; i++)
    {
        if(!state[i])
            continue;
        for(int j = i*i; j <= n; j += i)
                state[j] = false;
    }
    for(int i = 2; i <= n; i++)
    {
        if(state[i])
            primes.push_back(i);
    }
    return primes;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int t, n;
    cin >> t;
    v = sieve(5000000);
    while (t--)
    {
        cin >> n;
        for(auto i : v)
        {
            if(i * i > n)
                break;
            while(n % i == 0)
            {
                cout << i << ' ';
                n /= i;
            }
        }
        if(n != 1)
            cout << n << ' ';
        cout << '\n';
    }
    return 0;
}