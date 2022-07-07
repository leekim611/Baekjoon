#include <iostream>

using namespace std;

int main() {
    int totalN, subN;
    scanf("%d\n", &totalN);
    while(totalN--) {
        cin >> subN;
        int* arr = new int[subN];
        float sum = 0, high = 0;
        double avg, ratio;

        for (int i = 0; i < subN; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum / subN;

        for (int i = 0; i < subN; i++) {
            if (avg < arr[i]) {
                high++;
            }
        }

        ratio = high / (double)subN * 100;

        cout << fixed;
        cout.precision(3);
        cout << ratio << "%" << endl; 

        sum = 0, high = 0;
        delete arr;
    }
}