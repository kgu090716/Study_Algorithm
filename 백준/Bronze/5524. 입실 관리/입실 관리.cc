#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        for(auto a:s)
        {
            if(a >= 'A' & a <= 'Z')
                a += 'a' - 'A';
            cout << a;
        }
        cout << '\n';
    }
}