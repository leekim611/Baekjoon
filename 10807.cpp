/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep, counter = 0;
    cin >> rep;
    int *arr = new int[rep];

    for (int i = 0; i < rep; i++) {
        cin >> arr[i];
    }

    int n;
    cin >> n;

    for (int i = 0; i < rep; i++) {
        if (n == arr[i]) {
            counter++;
        }
    }

    cout << counter << endl;
}