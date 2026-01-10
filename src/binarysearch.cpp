#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {2, 3232, 2, 23, 4, 56, 7, 88, 54355};
    int size = sizeof(a) / sizeof(a[0]);
    int target = 2;

    sort(a, a + size);

    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == target) {
            cout << "Found at index: " << mid << endl;
            return 0;
        }
        else if (a[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}
