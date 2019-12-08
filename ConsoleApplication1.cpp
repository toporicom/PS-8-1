

#include <iostream>
using namespace std;
int main()
{
	int x, ll,a,b,c,d;
	cin >> a>>b>>c>>d;
	if (a > b) {
		if (a > c) {
			if (a > d) {
				cout << a << " ";
			}
			else {
				cout << d << " ";
			}

		}
		else {
			if (c > d) {
				cout << c << " ";
			}
			else {
				cout << d << " ";
			}
		}
	}
	else {
		if (b > c) {
			if (b > d) {
				cout << b << " ";

			}
			else {
				cout << d << " ";

			}
		}
		else {
			if (c > d) {
				cout << c << " ";

			}
			else {
				cout << d << " ";

			}
		}
	}
	if (a < b) {
		if (a < c) {
			if (a < d) {
				cout << a << " ";
			}
			else {
				cout << d << " ";
			}

		}
		else {
			if (c < d) {
				cout << c << " ";
			}
			else {
				cout << d << " ";
			}
		}
	}
	else {
		if (b < c) {
			if (b < d) {
				cout << b << " ";

			}
			else {
				cout << d << " ";

			}
		}
		else {
			if (c < d) {
				cout << c << " ";

			}
			else {
				cout << d << " ";

			}
		}
	}
		
	
	

cin >> ll;
return 0;

}

