#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0;
    cin >> N;

    // 1. 입력값 넣기
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
         cin >> p[i]; // 인출시간의 배열
    }
    
    // 2. 가장 좋은 데이터를 뽑을 수 있게 미리 정렬
    sort(p.begin(), p.end()); // 인출시간 짧은 사람부터 오름차순으로 정렬
    
    // 3. 가장 좋은 데이터 선택
    int answer = 0; // 모든 대기시간의 총합
    int current_sum = 0; // 현재 순서 사람이 돈을 뽑기까지 걸린 시간
    
    for (int i = 0; i < N; i++)
    {
        current_sum += p[i];
        answer += current_sum;
    }
    cout << answer;

    return 0;
}