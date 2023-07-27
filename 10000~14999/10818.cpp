/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int max(int n1, int n2);
int min(int n1, int n2);

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int num, maxN, minN;
    cin >> num;
    int* arr = new int[num];

    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    maxN = arr[0], minN = arr[0];

    for (int i = 0; i < num; i++) {
        maxN = max(maxN, arr[i]);
        minN = min(minN, arr[i]);
    }

    cout << minN << " " << maxN << "\n";

    delete arr;
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}
int min(int n1, int n2) {
    if (n1 > n2) {
        return n2;
    } else {
        return n1;
    }
}