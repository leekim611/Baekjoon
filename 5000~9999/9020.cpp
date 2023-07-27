/* 
    풀이 날짜: 220716
*/

#include <iostream>
#include <cmath>

using namespace std;

bool primeNumber(int n, int end = 0, int start = 2) {
    if (end == 0) {
        end = sqrt(n);
    }
    for (int i = start; i <= end; i++) {
        if (!(n%i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int rep, evenNum, save = 1;
    cin >> rep;
    while(rep--) {
        cin >> evenNum;

        for (int i = 2; i <= (evenNum/2); i++) {
            if (primeNumber(i) && primeNumber(evenNum - i)) {
                if (save <= i) {
                    save = i;
                }
            } 
        }
        cout << save << " " << evenNum - save << "\n";
        save = 1;
    }
}
