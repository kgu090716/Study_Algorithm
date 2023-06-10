#include <bits/stdc++.h>
using namespace std;
int arr[5];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i] < 40)
            arr[i] = 40;
        sum += arr[i];
    }
    cout << sum/5 << '\n';
    return 0;
}