#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    int input;
    for(int i = 0; i < 5; i++)
    {
        cin >> input;
        sum+=input;
    }
    cout << sum;
    return 0;
}