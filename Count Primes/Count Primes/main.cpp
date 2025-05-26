#include <iostream>
using namespace std;
 
bool isTrue(int n) {
	if (n < 2)  return false;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int input;
	cout << "bir deger giriniz: "; cin >> input;

	int counter = 0;

	for (int i = 2; i < input; ++i) {
		if (input % i == 0 && isTrue(i)) {
			counter++;
			cout << "input: " << input << endl;
			cout << "output: " << counter << endl;
			cout << "aciklama: " << i << " -> asal bolenler" << endl;
		} 
	}
	cout << "Toplam asal bolen sayisi: " << counter << endl;
}