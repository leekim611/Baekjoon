/* 
    풀이 날짜: 220716
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool desc(int a, int b) {
    return a > b;
}

int main() {
    int n, m, sum, temp = 0;
    cin >> n >> m;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n, desc);


    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                sum = arr[i]+arr[j]+arr[k];
                if (sum <= m) {
                    if (m-sum == min(m-sum, m-temp)) {
                        temp = sum;
                    }
                }
            }
        }
    }
    cout << temp << endl;
}