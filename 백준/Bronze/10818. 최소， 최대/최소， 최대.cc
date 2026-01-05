#include<iostream>
using namespace std;

int main()
{
int numCount = 0;
int minVal = 1000001;
int maxVal = -1000001;
    
cin >> numCount;
for(int i = 0; i < numCount; i++)
{
    int num;
    cin >> num;
    
    if(num <= minVal)
    {
       minVal = num;
    }

    if(num >= maxVal)
    {
      maxVal = num;
    }
}

cout << minVal << " " << maxVal;

return 0;
}