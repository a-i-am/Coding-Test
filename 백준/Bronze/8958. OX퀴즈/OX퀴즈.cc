#include <iostream>
#include <string>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    for(int i = 0; i < testCase; i++) {
        string ox;
        cin >> ox;
        int totalScore = 0;
        int comboScore = 0;

        for(int i = 0; i < ox.length(); i++)
        {
            if(ox[i] == 'O')
            {
                comboScore++;
                totalScore += comboScore;
            }
            else if(ox[i] == 'X')
            {
                comboScore = 0;
            }
        }
        cout << totalScore << "\n";
    }

    return 0;
}