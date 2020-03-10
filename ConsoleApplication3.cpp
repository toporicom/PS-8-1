#include<iostream>
#include<vector>
using namespace std;
int main() {
	int i, j, n;
	long long x, y;
	cin >> n;
	y = 0;
	vector<int> a(n);
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i - j >= 8 or i - j <= -8) {
				x = a[i] * a[j];
				if (x > y) {
					y = x;
				}
			}
		}
	}
	cout << y;
	return 0;
}