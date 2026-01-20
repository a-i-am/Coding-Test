#include<iostream>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    
    for(int t = 0; t < T; t++)
    {
        int H, W, N;
        cin >> H >> W >> N;
        int floor, room;
        
        if(N % H == 0)
        {
            floor = H;
            room = N / H;
        }
        else
        {
            floor = N % H;
            room = (N / H)+1;
        }
        
        cout << (floor * 100) + room << "\n";
    }
    
    return 0;
}