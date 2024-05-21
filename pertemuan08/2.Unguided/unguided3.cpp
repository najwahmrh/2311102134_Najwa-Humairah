//Najwa Humairah
//2311102134

#include <iostream>

using namespace std;

int main(){
    // Jumlah elemen dalam array
    const int n = 10;
    // Array berisi data yang akan dicari
    int data_134[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    // Variabel untuk menghitung jumlah kemunculan angka yang dicari
    int jumlah_134 = 0;
    // Variabel untuk menyimpan angka yang akan dicari
    int cari_134;

    // Proses pencarian
    cout << "==================================================\n";
    cout << " Program Sequential Search" << endl;
    cout << " Data: {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "==================================================\n";

    // Meminta input angka yang akan dicari
    cout << " Masukkan angka yang ingin dicari : ";
    cin >> cari_134;

    // Perulangan untuk mencari nilai pada data dengan mencocokkan data dengan angka yang dicari
    for (int i = 0; i < n; i++){
        if (data_134[i] == cari_134)
        {
            jumlah_134++;
        }
    }

    // Output hasil pencarian
    cout << "==================================================\n";
    if (jumlah_134 > 0){
        cout << " Angka '" << cari_134 << "' ditemukan sebanyak " << jumlah_134 << " kali pada data." << endl;
    }
    else{
        cout << " Angka '" << cari_134 << "' tidak ditemukan pada data tersebut." << endl;
    }
    cout << "==================================================\n";

    return 0;
}
