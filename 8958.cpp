/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int main() {
    int rep, score = 0, count = 0;
    scanf("%d\n", &rep);

    while(rep--) {
        char c;
        while((c = getchar()) != '\n') {
            if (c == 'O') {
                count++;
            } else {
                count = 0;
            }
            score += count;
        }
        cout << score << endl;
        score = 0, count = 0;
    }
}

// https://www.acmicpc.net/board/view/35332 참고