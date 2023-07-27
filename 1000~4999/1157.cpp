/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int main() {
    string str;
    int arr[26] = {0}, maxIndex = 0;
    bool q = false;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] - '0' >= 49) {
            arr[str[i]-'0'-49]++;
        } else {
            arr[str[i]-'0'-17]++;
        }
    }

    for (int i = 1; i < 26; i++) {
        if (arr[maxIndex] < arr[i]) {
            maxIndex = i;
            q = false;
        } else if (arr[maxIndex] == arr[i]) {
            q = true;
        }
    }
    
    if (q) {
        cout << "?" << endl;
    } else {
        cout << (char)(maxIndex+65)<< endl;
    }
}