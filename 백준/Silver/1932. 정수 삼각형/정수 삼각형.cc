#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    // 층수
    int n;
    cin >> n;
    
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    // 전체 데이터 초기회
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> dp[i][j];    
        }
    }
    
    for (int i = 2; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) 
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + dp[i][j];
        }
    }
    
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        answer = max(answer, dp[n][i]);
    }
    
    cout << answer;
    
    return 0;
}