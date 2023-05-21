#include <bits/stdc++.h>
using namespace std;
vector <long long> v;
long long reverse(long long n)
{
    long long temp, reversenum = 0;
    while(n > 0)
    {
        temp = n % 10;
        reversenum = reversenum * 10 + temp;
        n /= 10;
    }
    return reversenum;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        input = reverse(input);
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(long long a : v)
    {
        cout << a << '\n';
    }
    return 0;
}