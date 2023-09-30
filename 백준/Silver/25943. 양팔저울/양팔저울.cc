#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, input;
    int sum_L = 0;
    int sum_R = 0;
    int diff = 0;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sum_L += v[0];
    sum_R += v[1];
    for(int i = 2; i< n; i++)
    {
        if(sum_L == sum_R)
            sum_L += v[i];
        else
        {
            if(sum_L < sum_R)
                sum_L += v[i];
            else
                sum_R += v[i];
        }
    }

    diff = sum_L > sum_R ? (sum_L - sum_R) : (sum_R - sum_L);
    
    while(diff)
    {
        while(diff >= 100)
        {
            diff -= 100;
            cnt++;
        }
        while(diff >= 50)
        {
            diff -= 50;
            cnt++;
        }
        while(diff >= 20)
        {
            diff -= 20;
            cnt++;
        }
        while(diff >= 10)
        {
            diff -= 10;
            cnt++;
        }
        while(diff >= 5)
        {
            diff -= 5;
            cnt++;
        }
        while(diff >= 2)
        {
            diff -= 2;
            cnt++;
        }
        while(diff >= 1)
        {
            diff -= 1;
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    //cout << sum_L << '\n';
    //cout << sum_R << '\n';
    return 0;
}