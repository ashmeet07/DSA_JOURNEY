#include <bits/stdc++.h>
using namespace std;

int armstrongSum(int n) {
    int val = n, power = 0;

    while (val > 0) {
        val /= 10;
        power++;
    }

    int sum = 0;
    val = n;

    while (val > 0) {
        int digit = val % 10;
        sum += pow(digit, power);
        val /= 10;
    }

    return sum;
}

int main() {
    int n = 153;
    if (armstrongSum(n) == n)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}
