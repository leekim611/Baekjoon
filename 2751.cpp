/* 
    풀이 날짜: 220717
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a < b;
}

int main() {
    int rep;
    cin >> rep;

    int *arr = new int[rep];

    for (int i = 0; i < rep; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+rep, comp);

    for (int i = 0; i < rep; i++) {
        cout << arr[i] << '\n';
    }
}