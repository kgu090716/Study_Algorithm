#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    int input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int c = 0;
        cin >> input;
        for(int j = 1; j <= input; j++)
        {
            if(input % j == 0)
                c++;
        }
        if(c == 2)
            cnt++;
    }
    cout << cnt << '\n';
}