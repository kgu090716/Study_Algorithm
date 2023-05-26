#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
char board[30][30];
int vis[30][30];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int total = 0;
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
            if (board[i][j] == '1' && vis[i][j] == 0)
            {
                int cnt = 0;
                queue<pair<int,int>> Q;
                vis[i][j] = 1;
                Q.push({i,j});
                while(!Q.empty())
                {
                    pair<int,int> cur = Q.front();
                    Q.pop();
                    for(int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || ny < 0 || nx >= n || ny >= n)
                            continue;
                        if(vis[nx][ny] || board[nx][ny] != '1')
                            continue;
                        vis[nx][ny] = vis[cur.X][cur.Y] + 1;
                        Q.push({nx,ny});
                    }
                    cnt++;
                }
                v.push_back(cnt);
                total++;
            }
        }
    }
    
    cout << total << '\n';
    sort(v.begin(), v.end());
    for(auto a : v)
        cout << a << '\n';
    return 0;
}