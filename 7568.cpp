/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[50][2];
    int rep, w, h;
    cin >> rep;
    for (int i = 0; i < rep; i++) {
        cin >> w >> h;
        arr[i][0] = w;
        arr[i][1] = h;
    }

    for (int i = 0; i < rep; i++) {
        int weight = arr[i][0];
        int height = arr[i][1];
        int counter = 1;

        for (int j = 0; j < rep; j++) {
            if (arr[j][0] > weight && arr[j][1] > height) {
                counter++;
            }
        }
        cout << counter << "\n";
    }
}