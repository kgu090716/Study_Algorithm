#include <bits/stdc++.h>
using namespace std;
int arr[5];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    for(int i = 0; i < 5; i++)
    {
        if(n % 10 == arr[i])
            cnt++;
    }
    cout << cnt << '\n';
    return 0;
}