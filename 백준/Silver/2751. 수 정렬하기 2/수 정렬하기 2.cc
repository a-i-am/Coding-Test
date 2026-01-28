#include <iostream>
#include <algorithm>
using namespace std;

int nums[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums + N);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << "\n";
    }

    return 0;
}