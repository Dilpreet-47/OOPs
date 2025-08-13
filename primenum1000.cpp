#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Prime numbers up to 1000 are: " << endl;

    for (int num = 2; num <= 1000; num++) {
        bool isPrime = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
