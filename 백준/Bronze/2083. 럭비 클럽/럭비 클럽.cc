#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        string s;
        int a;
        int w;
        cin >> s;
        cin >> a >> w;
        if(s == "#" && a == 0 && w == 0)
            break;
        if(a>17 || w >= 80)
            cout << s << ' ' << "Senior" << '\n';
        else
            cout << s << ' ' << "Junior" << '\n';
    }
    return 0;
}