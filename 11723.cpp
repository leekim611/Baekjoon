/*
    풀이 날짜: 220720
*/

#include <iostream>

using namespace std;

bool exist[20];

void set(bool isAll) {
    for (int i = 0; i < 20; i++) {
        exist[i] = isAll;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set(false);

    string str;
    int rep, num;
    cin >> rep;

    while(rep--) {
        cin >> str;
        if (str == "add") {
            cin >> num;
            exist[num-1] = true;
        } else if (str == "remove") {
            cin >> num;
            exist[num-1] = false;
        } else if (str == "check") {
            cin >> num;
            if (exist[num-1]) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (str == "toggle") {
            cin >> num;
            exist[num-1] = !exist[num-1];
        } else if (str == "all") {
            set(true);
        } else {
            set(false);
        }
    }
}