// Najwa Humairah
// 2311102134

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isPalindrom_134(string str) {
    stack<char> charStack;
    int length = str.length();

    for (int i = 0; i < length / 2 ; i++) {
        charStack.push(str[i]);
    }

    int start = length / 2;
    if (length % 2 != 0) {
        start++;
    }
    for (int i = start; i < length; i++) {
        if (str[i] != charStack.top()) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    char lanjutkan_134;
    do {
        string input;
        cout << "\nMasukkan kalimat: ";
        getline(cin, input);

        if (isPalindrom_134(input)) {
            cout << "Kalimat tersebut adalah : Palindrom" << endl;
        } else {
            cout << "Kalimat tersebut adalah : Bukan Palindrom" << endl;
        }

        cout << "Ingin memasukkan kata atau kalimat lain? (y/n): ";
        cin >> lanjutkan_134;
        cin.ignore();
    } while (lanjutkan_134== 'y' || lanjutkan_134 == 'Y');

    return 0;
}