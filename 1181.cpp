/* 
    풀이 날짜: 220718
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int size, rep = 0;
    cin >> size;
    int temp = size;
    string *arr = new string[size];

    for (int i = 0; i < temp; i++) {
        string str;
        cin >> str;
        string *p = find(arr, arr+temp, str);
        if (p == arr+temp) {
            arr[i] = str;
        } else {
            rep++;
        }
    }

    stable_sort(arr, arr+temp);

    for (int i = 0; i < temp; i++) {
        for (int j = i+1; j < temp; j++) {
            string str;
            if (arr[i].size() > arr[j].size()) {
                str = arr[i];
                arr[i] = arr[j];
                arr[j] = str;
            }
        }
    }


    for (int i = rep; i < size; i++) {
        cout << arr[i] << endl;
    }
}