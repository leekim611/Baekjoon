#include <iostream>

using namespace std;

int main() {
    int num, sum, newN, cycle = 0;
    cin >> num;
    newN = num;

    while(true) {
        if (newN < 10) {
            sum = newN;
        } else {
            sum = newN/10 + newN%10;
        }
        newN = (newN%10)*10 + sum%10;
        cycle++;
        if (newN == num) {
            break;
        }
    }
    cout << cycle << endl;
}