#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>


int romanToNumber(string s)
{
	int total = 0;
	unordered_map<char, int> romanValues = {
		{'I', 1}, {'V' ,5}, {'X' ,10}, {'L' ,50}, {'C', 100}, {'D', 500}, {'M' ,1000}
		
	};

	for (int i = 0; i < s.length(); ++i) {
		int currentVal = romanValues[s[i]];
		int nextVal = (i + 1 < s.length() ? romanValues[s[i + 1]] : 0);
		
		(currentVal < nextVal ?  total -= currentVal : total += currentVal);

	}
	return total;
}

int main() {
	
	string roma; 
	cout << "Roma rakami giriniz:"; cin >> roma;

	int result = romanToNumber(roma); 

	cout << "Sayisal karsiligi: " << result << endl;

	return 0;
}