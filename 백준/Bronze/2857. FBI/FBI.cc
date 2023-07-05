#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int cnt = 0;
    for(int i = 0; i < 5; i++)
    {
        cnt++;
        cin >> s;
        if(s.find("FBI") == string::npos)
            continue;
        else
            v.push_back(cnt);
    }
    if(v.empty())
        cout << "HE GOT AWAY!" << '\n';
    else
    {
        for(auto a : v)
            cout << a << ' ';
    }
    return 0;
}