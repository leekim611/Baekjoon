/* 
    풀이 날짜: 220716
*/

#include <iostream>

using namespace std;

int main() {
    int arr[8];
    bool mix = false, asc;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    if (arr[0] < arr[1]) {
        asc = true;
    } else {
        asc = false;
    }

    for (int i = 1; i < 7; i++) {
        if (asc) {
            if (arr[i] < arr[i+1]) {
                continue;
            } else {
                mix = true;
            }
        } else {
            if (arr[i] > arr[i+1]) {
                continue;
            } else {
                mix = true;
            }
        }
    }

    if (mix) {
        cout << "mixed" << endl;
    } else {
        if (asc) {
            cout << "ascending" << endl;
        } else {
            cout << "descending" << endl;
        }
    }
}