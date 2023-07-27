/* 
    풀이 날짜: 220707
*/

 #include <iostream>

using namespace std;

int max(int n1, int n2);

int main() {
    int num, maxN = 0;
    float sum = 0;
    cin >> num;
    float* arr = new float[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
        maxN = max(maxN, arr[i]);
    }

    for (int i = 0; i < num; i++) {
        sum += (arr[i] / maxN * 100);
    }

    cout << sum / num << endl;

    delete arr;
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}