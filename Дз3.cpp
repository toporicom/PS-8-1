/*
3
Vanya 21 1 2 124
Ya 15 2 3 120
Hz 31 3 4 120
*/

#include<iostream>                  
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
struct Vanya {
	string name;
	int old;
	int kurs;
	int gruppa;
	int iq;
	bool operator<(Vanya object) {
		if (this->iq == object.iq) {
			return this->iq < object.iq;
		}
		else {
			return this->iq < object.iq;
			if (this->old == object.old) {
				return this->old < object.old;
			}
			else {
				return this->old < object.old;
				if (this->kurs == object.kurs) {
					return this->kurs < object.kurs;
				}
				else {
					return this->kurs < object.kurs;
					if (this->gruppa == object.gruppa) {
						return this->gruppa < object.gruppa;
					}
					else {
						return this->gruppa < object.gruppa;
					}
				}
			}
		}
	}
};
int main() {
	int a, b;
	cin >> a;
	vector<Vanya> n(a);
	for (int i = 0; i < a; i++) {
		cin >> n[i].name; cout << "\n";
		cin >> n[i].old; cout << "\n";
		cin >> n[i].kurs; cout << "\n";
		cin >> n[i].gruppa; cout << "\n";
		cin >> n[i].iq; cout << "\n";
	}
	sort(n.begin(), n.end());
	for (int i = 0; i < a; i++) {
		cout << n[i].name << "\n" << n[i].old << "\n" << n[i].kurs << "\n" << n[i].gruppa << "\n" << n[i].iq << "\n";
		
	}
return 0;
}