#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int len;
    cin >> s;
    len = s.length();
    for(int i = 0; i < len; i+=10)    
    {
        cout << s.substr(i, 10) << '\n';
    }
    return 0;
}