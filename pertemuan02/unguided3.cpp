#include <iostream>

using namespace std; 

int main(){

    int size_134;

    // Meminta pengguna untuk memasukkan ukuran atau jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> size_134;

    // Deklarasi array sesuai dengan ukuran yang dimasukkan pengguna
    int arr[size_134];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i_134 = 0; i_134 < size_134; i_134++) {
        cout << "Elemen ke-" << i_134 + 1 << ": ";
        cin >> arr[i_134];
    }

    // Menampilkan tampilan menu
    do{
        cout << endl;
        int pilihan_134;
        cout << "\n====Pilihan Menu====\n";
        cout << "1. Cari Nilai Maksimum" << endl;
        cout << "2. Cari Nilai Minimum" << endl;
        cout << "3. Cari Nilai Rata-rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan_134;

        switch (pilihan_134){
            case 1: // Mencari nilai maksimum
            {
                int max_134 = arr[0];
                for (int i_134 = 1; i_134 < size_134; i_134++) {
                    if (arr[i_134] > max_134) {
                        max_134 = arr[i_134];
                    }
                }
                cout << "Nilai Maksimum : " << max_134 << endl;
                break;
            }
            case 2: // Mencari nilai minimum
            {
                int min_134 = arr[0];
                for (int i_134 = 1; i_134 < size_134; i_134++) {
                    if (arr[i_134] < min_134) {
                        min_134 = arr[i_134];
                    }
                }
                cout << "Nilai Minimum : " << min_134 << endl;
                break;
            }
            case 3: // Mencari nilai rata-rata
            {
                int total = 0;
                for (int i_134 = 0; i_134 < size_134; i_134++) {
                    total += arr[i_134];
                }
                double average = static_cast<double>(total) / size_134;
                cout << "Nilai Rata-rata: " << average << endl;
                break;
            }
            case 4: // Keluar
            {
                cout << "Terima Kasih! Program selesai." << endl;
                break;
            }
            default: 
                cout << "Pilihan tidak valid!" << endl;
        }
    }while (true);

    return 0; 
}
