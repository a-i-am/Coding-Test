#include<iostream>
using namespace std;
int main()
{
    char numC;
    int numCount = 0;
    int sum = 0;

    cin >> numCount;

    while(numCount > 0)
    {
        cin >> numC;
        sum += numC - '0';
        
        numCount--;
    }

    cout << sum;
    
    return 0;
}