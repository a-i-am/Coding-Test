#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> graph[100001];
int visitOrder[100001];
int turn = 1;

void Dfs(int current)
{
    visitOrder[current] = turn;
    turn++;

    for(int i = 0; i < graph[current].size(); i++)
    {
        int next = graph[current][i];

        if (visitOrder[next] == 0)
        {
            Dfs(next);
        }
    }
}

int main()
{
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
        sort(graph[i].begin(), graph[i].end());
    }

    Dfs(startNum);
    
    for(int i = 1; i <= nodeCount; i++)
    {
        cout << visitOrder[i] << "\n";
    }

    return 0;
}