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
   
    // 큐에 넣은 만큼만 탐색
    while(!(q.empty()))
    {
        // 큐가 노드를 추가한 만큼 맨 앞에 노드가 제거되어야하니까
        // 대기열에서 제거
        int current = q.front();
        q.pop();
        
        for(int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i];
            
            if(visitOrder[next] == 0)
            {
                visitOrder[next] = turn; // 순서를 매기는 용도
                turn++; // 다음 노드를 위해 턴 증가
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
    
    // 몇 개의 쌍이 존재해야하는지, 노드는 1번부터 시작.
    for(int i = 1; i <= pairCount; i++)
    {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for(int i = 1; i <= nodeCount; i++)
    {
        // 각 그래프마다 존재하는 노드들 정렬 (기존에 입력된 노드 번호들을 우선 정렬)
        // 오름차순 방문
        sort(graph[i].begin(), graph[i].end());
    }
    
    Bfs(startNum);
    
    for(int i = 1; i <= nodeCount; i++)
    {
        cout << visitOrder[i] << "\n";
    }

    return 0;
}