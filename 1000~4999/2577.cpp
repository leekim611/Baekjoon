/* 
    풀이 날짜: 220707
*/

 #include <iostream>

using namespace std;

int main() {
    int arr[10] = {0, }, n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int mul = n1 * n2 * n3;
    
    int temp;
    while(true) {
        temp = mul % 10;
        arr[temp]++;
        mul /= 10;
        if (mul == 0) {
            break;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}