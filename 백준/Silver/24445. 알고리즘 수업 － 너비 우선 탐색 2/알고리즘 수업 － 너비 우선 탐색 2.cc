#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<int> graph[100001];
int visitOrder[100001];
int turn = 1;

void Bfs(int start)
{
    queue<int> q;
    
    q.push(start);
    visitOrder[start] = turn;
    turn++;
    
    while(!q.empty())
    {
        int current = q.front();
        q.pop();
        
        for(int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i];
            
            if(visitOrder[next] == 0)
            {
                visitOrder[next] = turn;
                turn++;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nodeCount = 0;
    int pairCount = 0;
    int startNum = 0;
    
    cin >> nodeCount >> pairCount >> startNum;
    
    for(int i = 0; i < pairCount; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for(int i = 1; i <= nodeCount; i++)
    {
        sort(graph[i].rbegin(), graph[i].rend());
    }
    Bfs(startNum);
    
    for(int i = 1; i <= nodeCount; i++)
    {
        cout << visitOrder[i] << "\n";
    }
    
    return 0;
}
