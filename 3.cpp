#include <iostream>
#include <string>

using namespace std;

int valid(string n) {
    for(int i = 0; i < n.length(); ++i) {
        if(n[i] == '3' || n[i] == '4' || n[i] == '7') {
            return false;
        }
    }
    return true;
}

int main() {
    int count;
    cin >> count;
    int i = 0;

    for(int num = 1;; num++) {
        if(valid(to_string(num))) {
            i++;
            if(i == count) {
                cout << num;
                return 0;
            }
        }
    }
}