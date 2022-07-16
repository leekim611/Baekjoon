/* 
    풀이 날짜: 220716
*/

#include <iostream>
#include <cmath>

using namespace std;

bool rightAngle(int a, int b, int c) {
    if (a > b && a > c) {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            return true;
        }
    } else if (b > a && b > c) {
        if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
            return true;
        }
    } else if (c > a && c > b) {
        if (pow(c, 2) == pow(b, 2) + pow(a, 2)) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[3];
    bool tf;

    while(1) {
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
            break;
        }
        tf = rightAngle(arr[0], arr[1], arr[2]);
        if (tf) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}