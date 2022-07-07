#include <iostream>

using namespace std;

int main() {
    int count;
    int n1, n2;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> n1 >> n2;
        cout << "Case #" << i+1 << ": " << n1 + n2 << endl;
    }
}