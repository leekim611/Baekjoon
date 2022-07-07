#include <iostream>

using namespace std;

int main() {
    int h = 0, t = 0, o = 0;
    int n1, n2;
    cin >> n1 >> n2;
    h = n2 / 100;
    t = n2 / 10 - h * 10;
    o = n2 / 1 - h * 100 - t * 10;
    cout << o * n1 << endl << t * n1 << endl << h * n1 << endl << n1 * n2 << endl;
    return 0;
}