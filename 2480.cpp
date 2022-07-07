#include <iostream>

using namespace std;

int max3(int n1, int n2, int n3);
int max2(int n1, int n2);

int main() {
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    if (d1 == d2 && d2 == d3) {
        cout << 10000 + d1*1000 << endl;
    } else if (d1 == d2 && d2 != d3) {
        cout << 1000 + d1*100 << endl;
    } else if (d2 == d3 && d3 != d1) {
        cout << 1000 + d2*100 << endl;
    } else if (d3 == d1 && d1 != d2) {
        cout << 1000 + d3*100 << endl;
    } else {
        cout << max3(d1, d2, d3)*100 << endl;
    }
    
}

int max3(int n1, int n2, int n3) {
    return max2(max2(n1, n2), n3);
}

int max2(int n1, int n2) {
    if (n1 < n2) {
        return n2;
    } else {
        return n1;
    }
}