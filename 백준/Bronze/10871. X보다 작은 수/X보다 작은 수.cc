#include<iostream>
using namespace std;
int main()
{
    int sequenceCount;
    int numMax;
    cin >> sequenceCount >> numMax;
    
    for(int i = 0; i < sequenceCount; i++)
    {
        int num;
        cin >> num;
        if(num < numMax)
        {
            cout << num << " ";
        }
    }
    
    return 0;
}