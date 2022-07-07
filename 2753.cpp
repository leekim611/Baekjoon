#include <iostream>

using namespace std;

int main() {
    int n1; 
    cin >> n1;
    if (n1 % 4 == 0) {
        if ((n1 % 100 != 0) || (n1 % 400 == 0)) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}