/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <set>

using namespace std;

long long arr[10000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, n, sum = 0, avg, counter = 0;
    cin >> k >> n;
    long long start = 1;
    long long end = 1;
    long long mid = (start+end)/2;
    long long max = 0;

    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (end < arr[i]) {
            end = arr[i];
        }
    }
    avg = sum / n;

    set<long long> s;


    while(end-start >= 0) {
        counter = 0;
        mid = (start+end)/2;
        for (int i = 0; i < k; i++) {
            counter += arr[i]/mid;
        }
        if (n <= counter) {
            start = mid+1;
            if (max < mid) {
                max = mid;
            }
        } else {
            end = mid-1;
        }
    }

    cout << max << "\n";
}