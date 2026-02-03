#include <iostream>

using namespace std;

bool IsDecimal(int num) {

    if (num == 1) {

        return false;

    }

    for (int i = 2; i * i <= num; i++) {

        if (num % i == 0) {

            return false;

        }

    }

    return true;

}

int main() {

    int M, N;

    cin >> M >> N;

    int decimalSum = 0;

    int minDecimal = -1;

    for (int i = M; i <= N; i++) {

        if (IsDecimal(i) == true) {

            decimalSum += i;

            if (minDecimal == -1) {

                minDecimal = i;

            }

        }

    }

    if (minDecimal == -1) {

        cout << minDecimal;

    }

    else {

        cout << decimalSum << "\n";

        cout << minDecimal;

    }

    return 0;

}