/* 
    풀이 날짜: 220718
*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    multimap<long long, int> map;

    int rep, input;
    cin >> rep;

    while(rep--) {
        cin >> input;
        map.insert(pair<long long, int>(input, 0));
    }

    int rep2, input2;
    cin >> rep2;
    while(rep2--) {
        cin >> input2;
        cout << map.count(input2) << " ";
    }

}