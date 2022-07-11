/* 
    풀이 날짜: 220711
*/

#include <iostream>

using namespace std;

int find(int n);

int main() {
    int n, rep = 1;
    cin >> n;
    while(true) {
        if (n <= find(rep)) {
            break;
        }
        rep++;
    }

    int temp = (find(rep)-n+1);
    int order = rep + 1;

    if (rep%2) {
        cout << temp << "/" << order-temp << endl;
    } else {
        cout << order-temp << "/" << temp << endl;
    }
}

int find(int n) {
    return (n + n*n)/2;
}

/*
    1, 3, 6, 10
    Sn = n(1+n)/2
*/