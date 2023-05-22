#include <bits/stdc++.h>
using namespace std;
vector<tuple<string, int, int, int>> v;
bool cmp(tuple<string, int, int, int> &v1, tuple<string, int, int, int> &v2)
{
    if (get<1>(v1) == get<1>(v2) && get<2>(v1) == get<2>(v2) && get<3>(v1) == get<3>(v2))
        return get<0>(v1) < get<0>(v2);
    if (get<1>(v1) == get<1>(v2) && get<2>(v1) == get<2>(v2))
        return get<3>(v1) > get<3>(v2);
    if (get<1>(v1) == get<1>(v2))
        return get<2>(v1) < get<2>(v2);
    return get<1>(v1) > get<1>(v2);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string name;
    int ko, eng, math;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> ko >> eng >> math;
        v.push_back({name, ko, eng, math});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto a : v)
    {
        cout << get<0>(a) << '\n';
    }
    return 0;
}