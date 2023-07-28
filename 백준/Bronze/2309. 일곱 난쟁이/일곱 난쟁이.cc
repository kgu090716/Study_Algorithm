#include <bits/stdc++.h>
using namespace std;
int arr[9];
vector<int> v;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 9; i++)
        cin >> arr[i];
    for (int a = 0; a < 9; a++)
    {
        for (int b = 1; b < 9; b++)
        {
            for (int c = 2; c < 9; c++)
            {
                for (int d = 3; d < 9; d++)
                {
                    for (int e = 4; e < 9; e++)
                    {
                        for (int f = 5; f < 9; f++)
                        {
                            for (int g = 6; g < 9; g++)
                            {

                                if ((arr[a] + arr[b] + arr[c] + arr[d] + arr[e] + arr[f] + arr[g]) == 100)
                                {
                                    v.push_back(arr[a]);
                                    v.push_back(arr[b]);
                                    v.push_back(arr[c]);
                                    v.push_back(arr[d]);
                                    v.push_back(arr[e]);
                                    v.push_back(arr[f]);
                                    v.push_back(arr[g]);
                                    sort(v.begin(), v.end());
                                    for (auto a : v)
                                    {
                                        cout << a << '\n';
                                    }
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}