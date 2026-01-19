#include <iostream>
using namespace std;
int main() {
    int nums[8];
    
    for(int i = 0; i < 8; i++) 
    {
        cin >> nums[i];
    }

    bool isAsc = true; 
    bool isDes = true;

    for(int i = 0; i < 7; i++) 
    {
        if(nums[i] < nums[i+1]) {
            isDes = false;
        }
        else if(nums[i] > nums[i+1]) {
            isAsc = false;
        }
    }

    if (isAsc) 
    {
        cout << "ascending";
    }
    else if (isDes) 
    {
        cout << "descending";
    } 
    else 
    {
        cout << "mixed";
    }

    return 0;
}