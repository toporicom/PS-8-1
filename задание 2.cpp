

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int  n, i, lll, a, b, x, y,k,j;
	cin >> a >>b;
	n = 1;
	for (i = a; i <= b; i++) {
		if (i % 2 == 0) {
			if (i % 3 == 0) {
				n = n * i;

			}
		}
	}
	if (n > 1) {
		cout<<n;
	}
	
	//это ч.1
	cin >> x >> y;
	cout << endl;
	k = 0;
	for (j = x; j <= y; j++) {
		if (j % 13 == 0) {
			k = k + j;
		}
	}
	cout << k;
	cin >> lll;

	return 0;
}


