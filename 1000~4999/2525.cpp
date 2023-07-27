/* 
    풀이 날짜: 220707
*/

 #include <iostream>

using namespace std;

int main() {
    int h, m, t;
    cin >> h >> m >> t;

    int fm = m + t;
    int fh = h + (fm/60);
    fm %= 60;
    fh %= 24;

    cout << fh << " " << fm << endl;
}