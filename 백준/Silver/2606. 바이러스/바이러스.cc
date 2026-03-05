#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
int infectedCount = 0;

void Dfs(int current)
{
    visited[current] = true;
     
    for(int i = 0; i < graph[current].size(); i++)
    {
        int next = graph[current][i];
        
        if (visited[next] == false)
        {
            infectedCount++;
            Dfs(next);
        }
    }
}

int main()
{
    [[maybe_unused]] int pcCount = 0;
    int pairCount = 0;

    cin >> pcCount >> pairCount; // pcCount는 문제 규칙 상 들어오는 입력값을 받기 위해 쓸 뿐 로직에 쓰이진 않는다. 
     
    for(int i = 0; i < pairCount; i++)
    {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    Dfs(1);
    cout << infectedCount;
    
    return 0;
}