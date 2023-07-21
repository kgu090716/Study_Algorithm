#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c && c == a)
        cout << "Equilateral";
    else if(a + b + c == 180 && (a == b || b == c || c == a))
        cout << "Isosceles";
    else if(a+b+c == 180 && (a!=b && b!=c && c!=a))
        cout << "Scalene";
    else
        cout << "Error";
    return 0;
}