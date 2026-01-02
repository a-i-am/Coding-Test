#include<iostream>
using namespace std;

int main()
{

  int floorCount = 0;
  cin >> floorCount;
   
  for(int i = 1; i <= floorCount; i++)
  {
      int emptyCount = floorCount - i;
      int starCount = floorCount - emptyCount;
  
      while(emptyCount > 0)
      {
        cout << " ";
        emptyCount--;
      }

      while(starCount > 0)
      {
        cout << "*";
        starCount--;
      }
      
      cout << "\n";
  }
        
    return 0;

}