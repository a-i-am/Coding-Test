#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int* nums = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    sort(nums, nums + N);
    
    for (int i = 0; i < N; i++) {
        cout << nums[i] << "\n";
    }
    
    delete[] nums;
    return 0;
}