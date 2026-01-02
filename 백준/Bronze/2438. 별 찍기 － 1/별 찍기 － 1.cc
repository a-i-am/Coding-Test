#include<iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    
    for(int i = 0; i < count; i++)
    {
        int lineStarCount
            = i+1;
        
         while(0 < lineStarCount)
         {
             lineStarCount--;
             cout << "*";
         }
         cout << "\n";
    }
    
    return 0;
}