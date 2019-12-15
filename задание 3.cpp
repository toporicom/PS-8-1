

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int  n, i, lll, b, x, y, k, j,p;

	cin >> n;
	vector<int> a(n);
	
	for (i = 0; i < n; i++) {
		cin >> a[i];
	
	}
	
	cin >> p;
	
	if (a[p-1] % 9 == 1) {
		cout << "find it";

	}
	else {
		cout << a[p-1];
	}



	cin >> lll;

	return 0;
}


