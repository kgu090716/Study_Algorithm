#include <bits/stdc++.h>
using namespace std;
int arr[1000002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + 1;
        if(i % 3 == 0)
            arr[i] = min(arr[i], arr[i/3] + 1);
        if(i % 2 == 0)
            arr[i] = min(arr[i], arr[i/2] + 1);
    }
    cout << arr[n] << '\n';
    return 0;
}