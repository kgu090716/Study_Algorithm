#include <bits/stdc++.h>
using namespace std;
int A[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0;
    for(int i = 0; i < 9; i++) 
    {
        cin >> A[i];
        sum += A[i];
    }
    sort(A, A+9);
    for(int i = 0; i < 8; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            if(sum - (A[i]+A[j]) == 100)
            {
                for(int k = 0; k < 9; k++)
                {
                    if(k == i || k == j)
                        continue;
                    cout << A[k] << '\n';
                }
                return 0;
            }
        }
    }
    return 0;
}