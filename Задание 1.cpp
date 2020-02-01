

#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a, b, c, d, word,i;
	cin >> a;
	cin >> b;
	for ( i = 0; i<b; i++) {
		if (a % 10 == 0) {
			a = a / 10;
		}
		else {
			a = a - 1;
		}
    }
	cout << a;



	return 0;


}