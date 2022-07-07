#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    while (true) {
        if (cin.eof()) {
            break;
        }
        cout << n1 + n2 << endl;
        cin >> n1 >> n2;
    }
}