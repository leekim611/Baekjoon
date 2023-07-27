/* 
    풀이 날짜: 220720
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 5, num, sum = 0;
    while(n--) {
        cin >> num;
        sum += num;
    }
    cout << sum;
}