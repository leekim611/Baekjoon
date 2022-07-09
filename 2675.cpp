/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int main() {
    int rep;
    scanf("%d\n", &rep);

    while(rep--) {
        int num;
        string str;
        cin >> num >> str;
        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < num; j++) {
                cout << str[i];
            }
        }
        cout << endl;
    }
}