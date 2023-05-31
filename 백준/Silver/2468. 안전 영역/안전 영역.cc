#include <bits/stdc++.h>
#define X first
#define Y second
int board[102][102];
bool vis[102][102];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int MXcnt = 0;
    //int tmp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    for (int h = 0; h <= 100; h++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                vis[i][j] = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] > h && !vis[i][j])
                {
                    queue<pair<int, int>> Q;
                    vis[i][j] = 1;
                    Q.push({i, j});
                    while (!Q.empty())
                    {
                        pair<int, int> cur = Q.front();
                        Q.pop();
                        for (int dir = 0; dir < 4; dir++)
                        {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                                continue;
                            if (vis[nx][ny] || board[nx][ny] <= h)
                                continue;
                            vis[nx][ny] = 1;
                            Q.push({nx, ny});
                        }
                    }
                    cnt++;
                }
            }
        }
        if(MXcnt < cnt)
        {
            MXcnt = cnt;
            //tmp = h;
        }
    }
    cout << MXcnt << '\n';
    //cout << tmp << '\n';
    return 0;
}