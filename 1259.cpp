/* 
    풀이 날짜: 220717
*/

#include <iostream>
#include <cmath>

using namespace std;

int counter(int n) {
    int count = 0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    bool tf = true;
    while(1) {
        int n, length, temp;
        cin >> n;
        if (!n) {
            return 0;
        }
        length = counter(n);
        temp = length;
        int *arr = new int[length];
        for (int i = 0; i < length; i++) {
            arr[i] = (n/(int)(pow(10, i)))%10;
        }

        while(1) {
            if (temp == 0) {
                break;
            }
            if (temp-1 != length-temp) {
                if (arr[temp-1] != arr[length-temp]) {
                    cout << "no" << endl;
                    tf = false;
                    break;
                }
            }
            temp--;
        }
        if (tf) {
            cout << "yes" << endl;
        }
        tf = true;
    }

}