#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int m; // 수열의 크기


void PrintMedianOnOdd() // 홀수 번째마다 중앙값을 출력하는 함수
{
    priority_queue<int> max_heap; // 함수가 호출될 때마다 새로운 왼쪽 그룹(최대 힙)을 빈 상태로 만든다.
    priority_queue<int, vector<int>, greater<int>> min_heap; // 함수가 호출될 때마다 새로운 오른쪽 그룹(최소 힙)을 빈 상태로 만든다.
    
    int count = 0; // 한 줄에 10개씩 출력
        
    // 홀짝 구분이 되어야하니까 1부터 시작
    for(int i = 1; i <= m; i++)
    {
        int num;
        cin >> num;
        
        if (max_heap.size() == min_heap.size()) {
            max_heap.push(num);
        } else {
            min_heap.push(num);
        }
        
        if (!max_heap.empty() && !min_heap.empty()) {
            if(max_heap.top() > min_heap.top()) {
               int left_boss = max_heap.top();
               int right_boss = min_heap.top();
               max_heap.pop();
               min_heap.pop();
               max_heap.push(right_boss);
               min_heap.push(left_boss);
            }
        }
        
        if(i % 2 != 0) {
            cout << max_heap.top() << " "; // 무조건 왼쪽 그룹의 top이 중앙값
            count++; // 출력한 개수를 1 늘려준다.
            
           // 만약 10개를 출력했다면
            if (count % 10 == 0)
            {
                cout << "\n"; // 다음 줄로 넘어가기 위해 줄바꿈을 해준다.
            }
        }
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; // 테스트 케이스의 개수
    cin >> t;
    
    // m 크기의 arr에 값을 각 인덱스(i)마다 입력 => 수열에 값을 채운 것.
    while(t--) {
        cin >> m;
        
        // 홀수 번째마다 중앙값을 구하므로, 중앙값의 총 개수를 먼저 출력
        cout << (m+1)/2 << "\n";

        PrintMedianOnOdd();
    }
    
    return 0;
}