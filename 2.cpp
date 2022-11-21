#include <iostream>
#include <string>

using namespace std;

int main() {
    string first, second;
    getline(cin, first);
    getline(cin, second);
    int count = 0;

    for(int i = 0; i < first.length(); ++i) {
        if(second[second.length() - 1] == first[i]) {
            count++;
        } 
    }

    cout << count;
    return 0;
}