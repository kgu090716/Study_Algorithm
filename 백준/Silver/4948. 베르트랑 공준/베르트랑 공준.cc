#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> primes;
    vector <bool> state(300000, true);
    int n;
    state[1] = false;
    for(int i = 2; i*i <= 300000; i++)
    {
        if(!state[i])
            continue;
        for(int j = i*i; j <= 300000; j+=i)
            state[j] = false;
    }
    for(int i = 2; i <= 300000; i++)
    {
        if(state[i])
            primes.push_back(i);
    }
    while(1) 
    {
        int cnt = 0;
        cin >> n;
        if(n == 0)
            break;
        for(int i = 0; i <= 300000; i++)
        {
            if(primes[i] > 2*n)
                break;
            if(primes[i] <= n)
                continue;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}