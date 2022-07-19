/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, count = 0;
    cin >> num;
    while(num) {
        int n = num%10;
        count += pow(n, 5);
        num /= 10;
    }
    
    cout << count << endl;
}