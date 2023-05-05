#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1010][1010];
int dist[1010][1010];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q;
    cin >> m >> n;
    int date = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i, j});
            if(board[i][j] == 0)
                dist[i][j] = -1;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dist[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dist[nx][ny] >= 0)
                continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(dist[i][j] == -1)
            {
                cout << -1 << '\n';
                return 0;
            }
            date = date > dist[i][j] ? date : dist[i][j];
        }
    }
    cout << date << '\n';
    return 0;
}