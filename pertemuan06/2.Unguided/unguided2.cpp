// Najwa Humairah
// 2311102134

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string BalikkanKata_134(string kalimat_134) {
    stack<char> karakterStack_134;

    // Operasi PUSH
    // Memasukkan setiap karakter dari kalimat ke dalam stack
    for (char karakterKata : kalimat_134) {
        karakterStack_134.push(karakterKata);
    }

    string BalikkanKata_134 = " ";

    // Operasi POP
    // Mengeluarkan setiap karakter dari stack untuk membentuk kalimat terbalik
    
    while (!karakterStack_134.empty()) {
        BalikkanKata_134 += karakterStack_134.top();
        karakterStack_134.pop();
    }

    return BalikkanKata_134;
}

int main() {
    string kalimat_134;

    cout << "Masukkan Kata ";
    getline(cin, kalimat_134);

    string kalimatTerbalik = BalikkanKata_134(kalimat_134);
    cout << "DataStack Array : " <<  endl;
    cout << "Data : " << kalimatTerbalik << endl;

    return 0;
}