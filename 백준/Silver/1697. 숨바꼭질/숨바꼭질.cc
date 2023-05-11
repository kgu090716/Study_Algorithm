#include <bits/stdc++.h>
using namespace std;
int dist[100005];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < 100005; i++)
        dist[i] = -1;
    queue<int> Q;
    dist[N] = 0;
    Q.push(N);
    while (dist[K] == -1)
    {
        int cur = Q.front();
        Q.pop();
        for(int nxt : {cur-1,cur+1,2*cur})
        {
            if(nxt < 0 || nxt > 100000)
                continue;
            if(dist[nxt] != -1)
                continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
        }
    }
    cout << dist[K] << '\n';
    return 0;
}