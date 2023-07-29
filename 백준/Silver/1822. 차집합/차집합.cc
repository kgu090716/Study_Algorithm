#include <bits/stdc++.h>
using namespace std;
vector<int> A, B;
vector<int> res;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int input;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        A.push_back(input);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        B.push_back(input);
    }
    sort(B.begin(), B.end());
    for(int i = 0; i < n; i++)
    {
        if(!(binary_search(B.begin(), B.end(), A[i])))
        {
            res.push_back(A[i]);
        }
    }
    cout << res.size() << '\n';
    for (auto a : res)
        cout << a << ' ';
    return 0;
}