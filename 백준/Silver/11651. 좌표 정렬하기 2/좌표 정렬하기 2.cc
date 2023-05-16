#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int n = 10;
pair<int, int> arr[100005];
pair<int, int> tmp[100005];
void merge_X(int st, int en)
{
    int mid = (st + en) / 2;
    int lidx = st;
    int ridx = mid;
    for (int i = st; i < en; i++)
    {
        if (ridx == en)
            tmp[i] = arr[lidx++];
        else if (lidx == mid)
            tmp[i] = arr[ridx++];
        else if (arr[lidx].X <= arr[ridx].X)
            tmp[i] = arr[lidx++];
        else
            tmp[i] = arr[ridx++];
    }
    for (int i = st; i < en; i++)
        arr[i] = tmp[i];
}

void merge_Y(int st, int en)
{
    int mid = (st + en) / 2;
    int lidx = st;
    int ridx = mid;
    for (int i = st; i < en; i++)
    {
        if (ridx == en)
            tmp[i] = arr[lidx++];
        else if (lidx == mid)
            tmp[i] = arr[ridx++];
        else if (arr[lidx].Y <= arr[ridx].Y)
            tmp[i] = arr[lidx++];
        else
            tmp[i] = arr[ridx++];
    }
    for (int i = st; i < en; i++)
        arr[i] = tmp[i];
}

void merge_sort_X(int st, int en)
{
    if (en == st + 1)
        return;
    int mid = (st + en) / 2;
    merge_sort_X(st, mid);
    merge_sort_X(mid, en);
    merge_X(st, en);
}

void merge_sort_Y(int st, int en)
{
    if (en == st + 1)
        return;
    int mid = (st + en) / 2;
    merge_sort_Y(st, mid);
    merge_sort_Y(mid, en);
    merge_Y(st, en);
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i].X >> arr[i].Y;
    merge_sort_X(0, n);
    merge_sort_Y(0, n);
    for(int i = 0; i < n; i++)
        cout << arr[i].X << ' ' << arr[i].Y << '\n';
    return 0;
}