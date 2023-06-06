#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    int lena = a.length();
    int lenb = b.length();
    for(int i = 0; i < lena; i++)
        a[i] = tolower(a[i]);
    for(int i = 0; i < lenb; i++)
        b[i] = tolower(b[i]);
    return a < b;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int len;
    string input;
    while (1)
    {
        vector<string> v;
        cin >> n;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            len = input.length();
            v.push_back(input);
        }
        sort(v.begin(), v.end(), compare);
        cout << v[0] << '\n';
    }
    return 0;
}