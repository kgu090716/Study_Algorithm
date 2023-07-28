#include <bits/stdc++.h>
using namespace std;
int A[1002];
vector<int> twoA;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            twoA.push_back(A[i] + A[j]);
    sort(A, A + n);
    sort(twoA.begin(), twoA.end());
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if(binary_search(twoA.begin(), twoA.end(), A[i] - A[j]))
            {
                cout << A[i];
                return 0;
            }
        }
    }
    return 0;
}