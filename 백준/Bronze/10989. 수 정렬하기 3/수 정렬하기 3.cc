#include <bits/stdc++.h>
using namespace std;
int arr[10005];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int num;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    }
    return 0;
}