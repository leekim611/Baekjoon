/* 
    풀이 날짜: 220700
*/

#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int arr[8001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    multiset<int> s;

    int rep, num, maxNum = -4000, minNum = 4000;
    double sum = 0;
    cin >> rep;
    for (int i = 0; i < 8001; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < rep; i++) {
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
        sum += num;
        s.insert(num);
        arr[num+4000] += 1;
    }

    int avg = (floor)((sum/(double)rep)+0.5);

    // 1
    cout << avg << "\n";
    
    // 2
    int mid = (rep/2)+1;
    int x = 1;
    for (auto iter:s) {
        if (x == mid) {
            cout << iter << "\n";
            break;
        } else {
            x++;
        }
    }

    // 3
    int max = 0, index, subIndex;
    bool tf = false; // false: 중복X, true: 중복
    for (int i = 8000; i >= 0; i--) {
        if (max < arr[i]) {
            // cout << "A: " << i << endl;
            max = arr[i];
            index = i-4000;
            tf = false;
        } else if (max == arr[i]) {
            // cout << "B: " << i << endl;
            tf = true;
            subIndex = index;
            index = i-4000;
        }
    }
    if (tf) {
        cout << subIndex << "\n";
    } else {
        cout << index << "\n";
    }

    // 4
    cout << maxNum - minNum << "\n";
}