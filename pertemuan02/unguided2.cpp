#include <iostream>

using namespace std;

int main() {
    int size1_134, size2_134, size3_134;

    // Meminta pengguna untuk memasukkan ukuran elemen array tiga dimensi
    cout << "===Masukkan ukuran elemen array tiga dimensi===" << endl;
    cout << "Masukkan ukuran dimensi size 1 (data array) = "; cin >> size1_134;
    cout << "Masukkan ukuran dimensi size 2 (barisan) = "; cin >> size2_134;
    cout << "Masukkan ukuran dimensi size 3 (kolom) = "; cin >> size3_134;
    cout << endl; 

    // Inisialisasi array tiga dimensi
    int array3D_134[size1_134][size2_134][size3_134];

    // Meminta pengguna untuk memasukkan nilai elemen array
    cout << "Masukkan nilai elemen array tiga dimensi : " << endl;
    for (int i = 0; i < size1_134; ++i) {
        for (int j = 0; j < size2_134; ++j) {
            for (int k = 0; k < size3_134; ++k) {
                cout << "Masukkan nilai elemen array[" << i << "][" << j << "][" << k << "]: ";
                cin >> array3D_134[i][j][k];
            }
        }
        cout << endl;
    }

    // Menampilkan nilai elemen array tiga dimensi
    cout << "\nNilai elemen array tiga dimensi " << endl;
    for (int i = 0; i < size1_134; ++i) {
        cout << "Data array yang ke-" << i+1 << endl;
        for (int j = 0; j < size2_134; ++j) {
            for (int k = 0; k < size3_134; ++k) {
                cout << "Array[" << i << "][" << j << "][" << k << "] = " << array3D_134[i][j][k] << endl;
            }
        }
        cout << endl;
    }

    //Menampilkan nilai elemen array dalam bentuk matriks
    cout << "- Tampilan array 3 dimensi dalam bentuk matriks -" << endl;
    for(int i=0; i<size1_134; i++){
        cout << "Matriks ke-" << i+1 << endl;
        for(int j=0; j<size2_134; j++){
            for(int k=0; k<size3_134; k++){
                cout << array3D_134[i][j][k] << " " << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
