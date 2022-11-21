#include <iostream>
using namespace std;

void func(int n) {
	int arr[32];
    int i = 0;
	while (n > 0) {
		arr[i] = n % 3;
		n = n / 3;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << arr[j];
    }
}

int main()
{
	int n;
    cin >> n;
	func(n);
	return 0;
}
