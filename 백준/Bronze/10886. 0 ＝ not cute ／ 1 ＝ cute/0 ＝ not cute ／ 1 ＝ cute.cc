#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int input;
    int cnt1 = 0, cnt2 = 0;
    cin >> n;
    while(n--)
    {
        cin >> input;
        if(input == 1) 
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1 < cnt2)
        cout << "Junhee is not cute!";
    else
        cout <<  "Junhee is cute!";
    return 0;
}