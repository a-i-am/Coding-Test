#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int count = 0;

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if(num == 1) {
            continue;
        }
        bool isDecimal = true;

        for(int j = 2; j < num; j++) {
            
            if(num % j == 0) {
               isDecimal = false;
               break;
            }
        }

        if(isDecimal == true) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}