#include <bits/stdc++.h>
using namespace std;
int arr[20000002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[10000000 + input]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        cout << arr[10000000 + input] << ' ';
    }
    return 0;
}