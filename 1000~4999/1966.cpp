/*
    풀이 날짜: 220719
*/

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

bool comp(int a, int b)
{
    return a < b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep;
    cin >> rep;

    while (rep--)
    {
        queue<int> q;
        int n, m, count = 1;
        cin >> n >> m;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            q.push(num);
            arr[i] = num;
        }

        sort(arr, arr + n, comp);

        while (true)
        {
            if (q.front() < arr[n - 1])
            {
                // cout << "A" << endl;
                if (!m)
                {
                    m = n - 1;
                }
                else
                {
                    m--;
                }
                int num = q.front();
                q.pop();
                q.push(num);
            }
            else if (q.front() == arr[n - 1])
            {
                // cout << "B" << endl;
                n--;
                q.pop();
                if (!m)
                {
                    cout << count << "\n";
                    break;
                }
                else
                {
                    m--;
                    count++;
                }
            }
        }
    }
}