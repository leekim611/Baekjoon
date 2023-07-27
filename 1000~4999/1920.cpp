/* 
    풀이 날짜: 220718
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, temp;
    cin >> n;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1+n, compare);

    cin >> m;
    temp = m;
    while(temp--) {
        int start = 0;
        int end = n - 1;
        int mid = (end+start)/2;

        bool tf = false;
        int num;
        cin >> num;
        
        while(end-start>=0) {
            if (arr1[mid] == num) {
                tf = true;
                break;
            } else if (arr1[mid] <= num) {
                start = mid+1;
            } else {
                end = mid-1;
            }
            mid = (end+start)/2;
        }

        if (tf) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}