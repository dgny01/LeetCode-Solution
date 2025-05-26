#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	int number;
	cin >> number;

	if (number < 0) {
		cout << false;
		return 0;
	}

	vector <int> digits;
	int temp = number;

	while (temp > 0) {
		digits.push_back(temp % 10);
		temp /= 10;
	}

	vector <int> original = digits;
	reverse(original.begin(), original.end());

	if (original == digits) {
		cout << "true";
	}

	else {
		cout << "false";
	}
		
	return 0;
}