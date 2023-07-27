/* 
    풀이 날짜: 220716
*/

#include <iostream>

using namespace std;

int MAX = 1234567891;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep;
    cin >> rep;
    string arr;
    cin >> arr;

    long *hash = new long[rep];
    long long sum = 0, multiple = 1;
    for (int i = 0; i < rep; i++) {
        hash[i] = arr[i]-'0'-48;
        for (int j = 0; j < i; j++) {
            multiple *= 31;
            if (multiple > MAX) {
                multiple %= MAX;
            }
        }
        for (int j = 0; j < hash[i]; j++) {
            sum = sum + multiple;
        }
        multiple = 1;
        
    }
    cout << sum%1234567891 << endl;
}