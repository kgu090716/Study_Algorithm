#include <bits/stdc++.h>
using namespace std;
vector <bool> state(1002, true);
vector <int> res;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    state[1] = false;
    cin >> n >> k;
    for(int i = 2; i <= n; i++)
    {
        if(!state[i])
            continue;
        for(int j = i; j <= n; j+=i)
        {
            if(state[j])
            {
                state[j] = false;
                res.push_back(j);
            }
        }
    }
    cout << res[k-1] << '\n';
    return 0;
}