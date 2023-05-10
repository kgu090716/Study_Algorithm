#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int piccnt = 0;
    int max_area = 0;
    int area;
    queue<pair<int, int>> Q;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 1 && vis[i][j] == 0)
            {
                area = 0;
                vis[i][j] = 1;
                Q.push({i, j});
                piccnt++;
                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    area++;
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                            continue;
                        if (vis[nx][ny] || board[nx][ny] != 1)
                            continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                max_area = area > max_area ? area : max_area;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << vis[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << piccnt << '\n';
    cout << max_area << '\n';
    return 0;
}