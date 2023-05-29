#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[52][52];
bool vis[52][52];
int dx[8] = {1, 0, -1, 0, 1, -1, 1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, -1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w = 1, h = 1;
    int cnt = 0;
    while (1)
    {
        cnt = 0;
        cin >> w >> h;
        if(w == 0 && h == 0)
            break;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> board[i][j];
            }
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                queue<pair<int, int>> Q;
                if (board[i][j] && !vis[i][j])
                {
                    vis[i][j] = 1;
                    Q.push({i, j});
                    while (!Q.empty())
                    {
                        pair<int, int> cur = Q.front();
                        Q.pop();
                        for (int dir = 0; dir < 8; dir++)
                        {
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if (nx < 0 || ny < 0 || nx >= h || ny >= w)
                                continue;
                            if (vis[nx][ny] || board[nx][ny] != 1)
                                continue;
                            vis[nx][ny] = 1;
                            Q.push({nx, ny});
                        }
                    }
                    cnt++;
                }
            }
        }

        // cout << '\n';
        // for (int i = 0; i < h; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         cout << board[i][j];
        //     }
        //     cout << '\n';
        // }
        // cout << '\n';
        // for (int i = 0; i < h; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         cout << vis[i][j];
        //     }
        //     cout << '\n';
        // }

        cout << cnt << '\n';
    }
    return 0;
}