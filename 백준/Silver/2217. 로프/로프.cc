#include <bits/stdc++.h>
using namespace std;
int arr[100002];
bool cmp(int a, int b)
{
    return a > b;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int res = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
        cin >> arr[i];
    sort(arr, arr+t, cmp);
    for(int i = 0; i < t; i++)
    {
        if(res < arr[i] * (i+1))
            res = arr[i] * (i+1);
    }
    cout << res << '\n';
    return 0;
}