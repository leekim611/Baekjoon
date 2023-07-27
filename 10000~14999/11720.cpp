/* 
    풀이 날짜: 220708
*/

#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    scanf("%d\n", &n);
    char* arr = new char[n];
    cin >> arr;

    for (int i = 0; i < n; i++) {
        count += arr[i] - '0';
    }

    cout << count << endl;
}