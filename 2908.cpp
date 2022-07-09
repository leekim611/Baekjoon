/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int change(int num);

int max(int n1, int n2);

int main() {
    int i1, i2, o1, o2;
    cin >> i1 >> i2;

    o1 = change(i1);
    o2 = change(i2);

    cout << max(o1, o2) << endl;

}

int change(int num) {
    return (num%10)*100 + ((num/10)%10)*10 + (num/100);
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}