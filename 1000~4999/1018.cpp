/* 
    풀이 날짜: 220718
*/

#include <iostream>

using namespace std;

char stable1[8][8] = 
{{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

char stable2[8][8] = 
{{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}, 
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}, 
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

int main() {
    int m, n, count = 0, min = 64;
    cin >> m >> n;

    char **input = new char*[m];
    for (int i = 0; i < m; i++) {
        input[i] = new char[n];
    }
    int **countBox1 = new int*[m-7];
    for (int i = 0; i < m-7; i++) {
        countBox1[i] = new int[n-7];
    }
    int **countBox2 = new int*[m-7];
    for (int i = 0; i < m-7; i++) {
        countBox2[i] = new int[n-7];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }

    for (int i = 0; i <= m-8; i++) {
        for (int j = 0; j <= n-8; j++) {
            
            for (int a = 0; a < 8; a++) {
                for (int b = 0; b < 8; b++) {
                    if (stable1[a][b] != input[i+a][j+b]) {
                        count++;
                    }
                }
            }
            countBox1[i][j] = count;
            count = 0;

            for (int a = 0; a < 8; a++) {
                for (int b = 0; b < 8; b++) {
                    if (stable2[a][b] != input[i+a][j+b]) {
                        count++;
                    }
                }
            }
            countBox2[i][j] = count;
            count = 0;
        }
    }

    for (int i = 0; i <= m-8; i++) {
        for (int j = 0; j <= n-8; j++) {
            if (min > countBox1[i][j]) {
                min = countBox1[i][j];
            }
            if (min > countBox2[i][j]) {
                min = countBox2[i][j];
            }
        }
    }

    cout << min << endl;
}