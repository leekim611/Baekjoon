#include <iostream>

using namespace std;

int main() {
    int arr[42] = {0, }, count = 0;
    int input;
    for (int i = 0; i < 10; i++) {
        cin >> input;
        int mod = input % 42;
        arr[mod]++;
    }

    for (int i = 0; i < 42; i++) {
        if (arr[i] != 0) {
            count++;
        }
    }
    cout << count << endl;
}