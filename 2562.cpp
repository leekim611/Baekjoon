#include <iostream>

using namespace std;

int main() {
    int arr[9], index, max;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }
    
    max = arr[0], index = 1;
    
    for (int i = 0; i < 9; i++) {
        if (max < arr[i]) {
            max = arr[i], index = i+1;
        }
    }

    cout << max << endl << index << endl;
}