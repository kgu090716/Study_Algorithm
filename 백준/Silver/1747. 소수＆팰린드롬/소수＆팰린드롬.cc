#include <bits/stdc++.h>
using namespace std;

bool state[1500002];

bool isPalindrome(int n)
{
    string s = to_string(n);
    string rs = s;
    reverse(rs.begin(), rs.end());
    return rs == s;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    state[1] = true;
    int n;
    cin >> n;
    for(int i = 2; i*i <= 1500000; i++)
    {
        if(state[i])
            continue;
        for(int j = i * i; j <= 1500000; j+=i)
            state[j] = true;
    }
    for(int i = n; i <= 1500000; i++)
    {
        if(!state[i])
        {
            if(isPalindrome(i))
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}