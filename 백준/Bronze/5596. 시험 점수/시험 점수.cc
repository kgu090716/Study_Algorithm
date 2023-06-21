#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> input; 
        sum1 += input;
    }
    for(int i = 0; i < 4; i++)
    {
        cin >> input; 
        sum2 += input;
    }
    if(sum1 < sum2)
        cout << sum2;
    else
        cout << sum1;
    return 0;
}