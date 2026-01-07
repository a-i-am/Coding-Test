#include<iostream>
using namespace std;
int main()
{
    int currNum = 0;
    int maxNum = 0;
    int maxIndex = 0;

    for(int i = 0; i < 9; i++)
    {
       cin >> currNum;      
      
       if(currNum > maxNum)
       {
           maxNum = currNum;
           maxIndex = i+1;
       }
    }
    
    cout << maxNum << "\n";
    cout << maxIndex;
}