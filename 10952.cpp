/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    while(n1 != 0 && n2 != 0) {
        cout << n1 + n2 << endl;
        cin >> n1 >> n2;
    }
}