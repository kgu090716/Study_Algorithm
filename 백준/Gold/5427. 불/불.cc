#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1005];
int dist1[1005][1005];
int dist2[1005][1005];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        bool impo = 1;
        queue<pair<int, int>> Q1;
        queue<pair<int, int>> Q2;
        cin >> m >> n;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                dist1[i][j] = -1;
                dist2[i][j] = -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> board[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == '*')
                {
                    dist1[i][j] = 0;
                    Q1.push({i, j});
                }
                if (board[i][j] == '@')
                {
                    dist2[i][j] = 0;
                    Q2.push({i, j});
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << board[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << dist1[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }

        while (!Q1.empty())
        {
            pair<int, int> cur = Q1.front();
            Q1.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    continue;
                if (dist1[nx][ny] >= 0 || board[nx][ny] == '#')
                    continue;
                dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
                Q1.push({nx, ny});
            }
        }

        while (!Q2.empty() && impo)
        {
            pair<int, int> cur = Q2.front();
            Q2.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                {
                    cout << dist2[cur.X][cur.Y] + 1 << '\n';
                    impo = 0;
                    break;
                }
                if (dist2[nx][ny] >= 0 || board[nx][ny] == '#')
                    continue;
                if (dist1[nx][ny] != -1 && (dist2[cur.X][cur.Y] + 1) >= dist1[nx][ny])
                    continue;
                dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
                Q2.push({nx, ny});
            }
        }
        // cout << "fire\n";
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << dist1[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        // cout << "person\n";
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << dist2[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        if (impo)
            cout << "IMPOSSIBLE" << '\n';
    }
}