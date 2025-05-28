#include <iostream>
using namespace std;
#include <cmath>

int main() {
	bool bulundu = false;
	int n;
	int count5 = 0;
	int count3 = 0;
	cout << "deger giriniz:"; cin >> n;

	if (n > 7) {
		goto furkan;
	}

	else {
		cout << "7den büyük deger giriniz";
		return 0;
	}
furkan:
	int sayac_for_i = 0;
	int sayac_for_j = 0;
	for (int i = 1; i <= n && !bulundu; ++i) {
		sayac_for_i++;
		sayac_for_j = 0;
		for (int j = 1; j <= n; ++j) {
			int result;
			result = 5 * i + 3 * j;
			sayac_for_j++;
			if (result == n) {
				bulundu = true;
				break;
			}
		}
	}
	cout << "icinde " << sayac_for_i << " tane 5 var " << sayac_for_j << " tane 3 var." << endl;
	return 0;
}