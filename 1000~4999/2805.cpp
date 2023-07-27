/* 
    풀이 날짜: 220720
*/

#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int arr[1000000];

bool comp(int a, int b) {
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep, num, maxNum = 0;
    ll m;
    cin >> rep >> m;
    for (int i = 0; i < rep; i++) {
        cin >> num;
        if (maxNum < num) {
            maxNum = num;
        }
        arr[i] = num;
    }

    sort(arr, arr+rep, comp);

    ll start = 0;
    ll end = maxNum;
    ll mid = (start+end)/2;
    ll max = 0;
    ll counter = 0;
    while(end >= start) {
        counter = 0;
        mid = (start+end)/2;
        for (int i = 0; i < rep; i++) {
            if (arr[i] - mid >= 0) {
                counter += (arr[i] - mid);
            }
        }
        if (counter < m) {
            end = mid-1;
        } else if (counter >= m) {
            start = mid+1;
            max = mid;
        }
    }

    cout << max << endl;
}