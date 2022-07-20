/* 
    풀이 날짜: 220720
*/

#include <iostream>

using namespace std;

int ground[500][500];
int time[257];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, b, maxHeight = 0, input, minHeight = 256;
    cin >> n >> m >> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> input;
            if (maxHeight < input) {
                maxHeight = input;
            }
            if (minHeight > input) {
                minHeight = input;
            }
            ground[i][j] = input;
        }
    }

    if (maxHeight == minHeight) {
        cout << 0 << " " << maxHeight << "\n";
        return 0;
    }

    int timer = 0, height = maxHeight, emptyGround = 0, enoughGround = 0;
    while(height >= 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ground[i][j] < height) {
                    emptyGround += (height - ground[i][j]);
                } else {
                    enoughGround += (ground[i][j] - height);
                }
            }
        }
        if (emptyGround > enoughGround+b) {
            height--;
            emptyGround = 0;
            enoughGround = 0;
            continue;
        }
        timer = emptyGround * 1 + enoughGround * 2;
        time[height] = timer;
        height--;
        timer = 0;
        emptyGround = 0;
        enoughGround = 0;
    }

    long long minTime = 128000000;
    int index = 0;
    for (int i = 0; i < 257; i++) {
        if (time[i] > 0 && minTime >= time[i]) {
            minTime = time[i];
            index = i;
        }
    }

    cout << minTime << " " << index << "\n";
}