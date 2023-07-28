#include <bits/stdc++.h>
using namespace std;
int Atmp[1000002];
vector <int> A, original;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> Atmp[i];
        original.push_back(Atmp[i]);
    }
    sort(Atmp, Atmp+n);
    for(int i = 1; i < n; i++)
    {
        if(Atmp[i] != Atmp[i-1])
        {
            A.push_back(Atmp[i-1]);
        }
    }
    A.push_back(Atmp[n-1]);

    for(int i = 0; i < n; i++)
        cout << lower_bound(A.begin(), A.end(), original[i]) - A.begin() << ' ';
    return 0;
}