#include <iostream>
#include <string>
using namespace std;

int main() {

	int a;
	cout << "Enter one of the integers: ";
	cin >> a;

	int b;
	cout << "Enter another integer: ";
	cin >> b;

	if (a > b) {
		cout << a << " is greater than " << b << endl;
	}
	else {
		cout << a << " is less than " << b << endl;
	}
}