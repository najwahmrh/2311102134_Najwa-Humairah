#include <iostream>

using namespace std;

int main()
{
    int angka_134[10]; // Mendeklarasikan array dengan 10 elemen
    int gnp_134[10], gnjl_134[10]; // Mendeklarasikan dua array yang digunakan untuk menyimpan angka genap dan ganjil
    int indexgnp_134 = 0; // Mendeklarasikan variabel Indeks untuk array angka genap
    int indexgnjl_134= 0; // mendeklarasikan variabel Indeks untuk array angka ganjil
    
    // Meminta pengguna untuk memasukkan data array
    cout << "Data Array: ";
    for (int a = 0; a < 10; a++){
        cin >> angka_134[a];
    }

    // Untuk memisahkan angka genap dan ganjil dari array
    for (int a = 0; a < 10; a++){
        if(angka_134[a] % 2 == 0){
            gnp_134[indexgnp_134] = angka_134[a]; // Untuk menyimpan angka genap ke dalam array angka genap
            indexgnp_134++;
        } else {
            gnjl_134[indexgnjl_134] = angka_134[a]; // Untuk menyimpan angka ganjil ke dalam array angka ganjil
            indexgnjl_134++;
        }
    }

    // Mencetak angka genap
    cout << "Angka Genap : ";
    for (int a = 0; a < indexgnp_134; a++){
        cout << gnp_134[a] << ", ";
    }
    cout << endl;

    // Mencetak angka ganjil
    cout << "Angka Ganjil : ";
    for (int a = 0; a < indexgnjl_134; a++){
        cout << gnjl_134[a] << ", ";
    }
    cout << endl;
    return 0;
}