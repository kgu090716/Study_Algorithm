#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1005];
int dist_fire[1005][1005];
int dist_JiHoon[1005][1005];
int R, C;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q_Fire;
    queue<pair<int, int>> Q_JiHoon;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
        cin >> board[i];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            dist_fire[i][j] = -1;
            dist_JiHoon[i][j] = -1;
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (board[i][j] == 'F')
            {
                Q_Fire.push({i, j});
                dist_fire[i][j] = 0;
            }
            if (board[i][j] == 'J')
            {
                Q_JiHoon.push({i, j});
                dist_JiHoon[i][j] = 0;
            }
        }
    }

    while (!Q_Fire.empty())
    {
        pair<int, int> cur = Q_Fire.front();
        Q_Fire.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx >= R || ny >= C || nx < 0 || ny < 0)
                continue;
            if (dist_fire[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            dist_fire[nx][ny] = dist_fire[cur.X][cur.Y] + 1;
            Q_Fire.push({nx, ny});
        }
    }

    while (!Q_JiHoon.empty())
    {
        pair<int, int> cur = Q_JiHoon.front();
        Q_JiHoon.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx >= R || ny >= C || nx < 0 || ny < 0)
                {
                    cout << dist_JiHoon[cur.X][cur.Y]+1 << '\n';
                    return 0;
                }
            if (dist_JiHoon[nx][ny] >= 0 || board[nx][ny] == '#')
                continue;
            if(dist_fire[nx][ny] != -1 && (dist_JiHoon[cur.X][cur.Y] + 1) >= dist_fire[nx][ny])
                continue;
            dist_JiHoon[nx][ny] = dist_JiHoon[cur.X][cur.Y] + 1;
            Q_JiHoon.push({nx, ny});
        }
    }

    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << dist_fire[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << dist_JiHoon[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }


    cout << "IMPOSSIBLE" << '\n';
    return 0;
}