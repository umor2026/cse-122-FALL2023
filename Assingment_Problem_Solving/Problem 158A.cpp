#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int advancingCount = 0;
    for (int i = 0; i < n; ++i) {
        advancingCount += (scores[i] >= scores[k - 1] && scores[i] > 0);
    }

    cout << advancingCount << endl;

    return 0;
}

