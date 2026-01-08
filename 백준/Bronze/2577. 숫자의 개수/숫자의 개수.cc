#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    int counts[10] = {0};

    cin >> A >> B >> C;
    int result = A * B * C;

    // result가 0이 될 때까지 반복
    while (result > 0) {
        int digit = result % 10;
        counts[digit]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << counts[i] << "\n";
    }

    return 0;
}