
#include <iostream>

using namespace std;

int maxBits(const bool array[], int size) {
    int max = 0;
    int current = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i]) {
            current++;
            if (current > max) {
                max = current;
            }
        }
        else {
            current = 0;
        }
    }

    return max;
}

int main() {
    bool arr[] = { true, true, true, true, false, true, true, false, false, true };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout <<  maxBits(arr, size) << endl;

    return 0;
}

