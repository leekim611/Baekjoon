/* 
    풀이 날짜: 220717
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2, l = 1, m = 1;
    cin >> num1 >> num2;

    int tempNum1 = num1, tempNum2 = num2;
    for (int i = 2; i < 10000; i++) {
        if (tempNum1%i == 0 && tempNum2%i == 0) {
            tempNum1 /= i;
            tempNum2 /= i;
            l *= i;
            i = 1;
        }
    }
    cout << l << endl << l*tempNum1*tempNum2 << endl;
}
