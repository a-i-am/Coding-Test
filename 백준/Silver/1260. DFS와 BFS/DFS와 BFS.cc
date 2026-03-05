#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

void Dfs(int cur)
{
    visited[cur] = true;
    cout << cur << " ";
    for (int next : graph[cur])
    {
        if (!visited[next])
        {
            Dfs(next);
        }
    }
}

void Bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while(!(q.empty()))
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        
        for(int next : graph[cur]) 
        {
            if (!visited[next]) 
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, v;
    cin >> n >> m >> v;
    
    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    
    Dfs(v);
    cout << "\n";
    fill(visited, visited + 1001, false);
    Bfs(v);
    
    return 0;
}