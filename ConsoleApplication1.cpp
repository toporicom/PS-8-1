

#include <iostream>
using namespace std;
int main()
{
	int x, ll,a,b,c;
	cin >> a>>b>>c;
	if (a > b) {
		if (a > c) { 
			cout << a << " ";
			if (b > c) { cout << c; }
			else { cout << b; }
		}
		else {
			cout << c<<" ";
			cout << b;
		}
	}
	else {
		if (b > c) {
			cout << b << " "; 
			if (a > c) {
				cout << c;
			}
			else { cout << a; }
		}
		else {
			cout << c << " ";
			cout << a;
		}
	}
	

cin >> ll;
return 0;

}

