#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Armstrong numbers up to 1000 are: " << endl;

    for (int num = 1; num <= 1000; num++) {
        int sum = 0, temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit; // cube of each digit
            temp = temp / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
