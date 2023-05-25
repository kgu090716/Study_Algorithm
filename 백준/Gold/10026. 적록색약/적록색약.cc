#include <bits/stdc++.h>
#define X first
#define Y second
char board[105][105];
bool vis[105][105];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == 0 && (board[i][j] == 'R' || board[i][j] == 'G' || board[i][j] == 'B'))
            {
                queue<pair<int, int>> Q;
                Q.push({i, j});
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx >= n || ny >= n || nx < 0 || ny < 0)
                            continue;
                        if (vis[nx][ny] || board[nx][ny] != board[i][j])
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
    // for(int i = 0; i < n ; i++)
    // {
    //     for(int j = 0; j < n; j++)
    //     {
    //         cout << vis[i][j];
    //     }
    //     cout << '\n';
    // }
    cout << cnt << ' ';

    cnt = 0;    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            vis[i][j] = 0;
            if(board[i][j] == 'G')
                board[i][j] = 'R';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == 0 && (board[i][j] == 'R' || board[i][j] == 'B'))
            {
                queue<pair<int, int>> Q;
                Q.push({i, j});
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx >= n || ny >= n || nx < 0 || ny < 0)
                            continue;
                        if (vis[nx][ny] || board[nx][ny] != board[i][j])
                            continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}