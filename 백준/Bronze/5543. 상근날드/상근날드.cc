#include <bits/stdc++.h>
using namespace std;
int hamburger[3];
int drink[2];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 5;
    for(int i = 0; i < 3; i++)
        cin >> hamburger[i];
    for(int i = 0; i < 2; i++)
        cin >> drink[i];
    sort(hamburger, hamburger+3);
    sort(drink, drink+2);
    cout << hamburger[0] + drink[0] - 50 << '\n';
    return 0;
}