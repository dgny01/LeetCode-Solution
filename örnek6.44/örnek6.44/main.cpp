#include <iostream>
using namespace std;
#include <vector>

int main()

{
	vector <int> basamak_deger; 
	int sayi, basamak = 0, i = 10;
	cout << "Sayi degerini giriniz:";

	cin >> sayi;
	int sayiyi_tutucu = sayi;

	while (true)

	{

		sayi = sayi / i;

		if (sayi == 0)

			{

			basamak += 1;

			cout << basamak;

			cout << "\n calisti\n";

			break;

			}

		else {
			basamak += 1;
			continue;
		}
	}
	int n =(int) pow(10, basamak - 1);
	if (basamak % 2 == 1) {
		
	}
	
	else {
		for (int i = 0; i < basamak; ++i) {
			int basamaklar = sayi / n;
			basamak_deger.push_back(basamaklar);

			
			n = n / 10;
		}
	}
	for (auto c : basamak_deger) {
		cout << c << ",";
	}
}

	