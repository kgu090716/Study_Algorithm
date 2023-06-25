#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> v1;
    vector<int> v2;
    int input;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v1.push_back(input);
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v2.push_back(input);
    }
    sort(v2.begin(), v2.end(), cmp);
    for(int i = 0; i < n; i++)
        sum += v1[i] * v2[i];
    cout << sum << '\n';
    return 0;
}
