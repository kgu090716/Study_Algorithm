#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[55][55];
bool vis[55][55];
int t;
int M, N, K;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input1, input2;
    int cnt = 0;

    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        cnt = 0;
        cin >> M >> N >> K;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }

        for (int i = 0; i < K; i++)
        {
            cin >> input1 >> input2;
            board[input2][input1] = 1;
        }

        // cout << "log : " << board[54][54] << '\n';

        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < M; j++)
        //     {
        //         cout << board[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        // cout << '\n';
        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < M; j++)
        //     {
        //         cout << vis[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (board[i][j] && vis[i][j] != 1)
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
                            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
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
        cout << cnt << '\n';
    }

    return 0;
}