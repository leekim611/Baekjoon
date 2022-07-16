/* 
    풀이 날짜: 220716
*/

#include <iostream>

using namespace std;

int min(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int moveX, moveY;

    moveX = min(x, w-x);
    moveY = min(y, h-y);
    
    cout << min(moveX, moveY) << endl;
}