#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int vis[302][302];
int n;
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    pair<int, int> start;
    pair<int, int> dest;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> start.X >> start.Y;
        cin >> dest.X >> dest.Y;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                vis[i][j] = -1;
            }
        }
        queue<pair<int, int>> Q;
        vis[start.X][start.Y] = 0;
        Q.push({start.X,start.Y});
        while(!Q.empty()) 
        {
            pair<int,int> cur = Q.front();
            Q.pop();
            for(int dir = 0; dir < 8; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx >= n || ny >= n || nx < 0 || ny < 0)
                    continue;
                if(vis[nx][ny] >= 0)
                    continue;
                vis[nx][ny] = vis[cur.X][cur.Y] + 1;
                Q.push({nx,ny});
            }
        }
        cout << vis[dest.X][dest.Y] << '\n';
    }
    return 0;
}