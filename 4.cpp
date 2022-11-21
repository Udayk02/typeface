#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }

    int x = INT_MAX, y = INT_MIN, p  = INT_MAX, q = INT_MIN;

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(arr[i][j] == 0) {
                x = min(x, j);
                y = max(y, j);
                p = min(p, i);
                q = max(q, i);
            }
        }
    }

    cout << "(" << p << "," << x << "), " << "(" << p << "," << y << "), " << "(" << q << "," << x << "), " << "(" << q << "," << y << ")";
    return 0;
}