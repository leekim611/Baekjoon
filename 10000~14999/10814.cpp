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

    int rep;
    cin >> rep;

    int age;
    string name;

    multimap<int, string> map;

    for (int i = 0; i < rep; i++) {
        cin >> age;
        cin >> name;
        map.insert(pair<int, string>(age, name));
    }

    multimap<int, string>::iterator iter;

    for (iter = map.begin(); iter != map.end(); iter++) {
        cout << iter->first << " " << iter->second << "\n";
    }
}