/* 
    풀이 날짜: 220716
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int arr[5], verifyNum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        verifyNum += pow(arr[i], 2);
    }
    cout << verifyNum%10 << endl;    
}