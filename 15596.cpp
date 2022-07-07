#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long sumN = 0;
    for (int i = 0; i < a.size(); i++) {
        sumN += a[i];
    }
    return sumN;
}

