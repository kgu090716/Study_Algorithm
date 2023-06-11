#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a = 1, b = 1;
    while(1)
    {
        cin >> a >> b;
        if(!a && !b)
            break;
        cout << a+b << '\n';
    }
    return 0;
}