/* 
    풀이 날짜: 220716
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n, count = 0;

    while(true) {
        cin >> n;
        if (!n) {
            return 0;
        }
        int root;

        for (int i = n+1; i <= 2*n; i++) {
            root = sqrt(i);
            if (root == 1 && i != 1) {
                count++;
                continue;
            }
            if (i % 2) {
                for (int j = 2; j <= root; j++) {
                    if (!(i%j)) {
                        break;
                    }
                    if (j == root) {
                        count++;
                    }
                }
            }
        }
        cout << count << '\n';
        count = 0;
    }
}