

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int  n, i, lll, b, x, y, k, j, p;
	y = 1;
	b = 1;
	cin >> x;
	vector<int>a(x);
	a[0] = 1;
	for (i = 1; i <= x; i++) {
		
			y = y * i*b;
			cout << y<<" ";
			b = y;
			a[i-1] = b;
			y = 1;
		
	}
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> p;
		cout << a[p-1];
	}
	cin >> lll;

	return 0;
}


