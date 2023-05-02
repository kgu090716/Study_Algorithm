#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    string word;
    stack<char> S;
    int cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> word;
        for (auto a : word)
        {
            if (a == 'A')
            {
                if (!(S.empty()) && S.top() == 'A')
                    S.pop();
                else
                    S.push('A');
            }
            else
            {
                if (!(S.empty()) && S.top() == 'B')
                    S.pop();
                else
                    S.push('B');
            }
        }
        if (S.empty())
            cnt += 1;
        while (!S.empty()) S.pop();
    }
    cout << cnt << '\n';
}