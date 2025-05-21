#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    string s;
    cout << "Parantez dizisini girin: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Gecerli parantez dizisi." << endl;
    }
    else {
        cout << "Gecersiz parantez dizisi!" << endl;
    }

    return 0;
}