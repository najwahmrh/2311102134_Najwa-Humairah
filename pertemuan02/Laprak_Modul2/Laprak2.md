# <h1 align="center">Laporan Praktikum Modul ARRAY </h1>
<p align="center"> Najwa Humairah_2311102134 </p>

## Dasar Teori

### Deklarasi Array
Setiap identifier yang akan digunakan harus dimasukkan dalam kamus atau deklarasi bersama dengan tipe data yang akan digunakan. Ini juga berlaku untuk tipe data array dan elemen-elemennya. Tipe dan nama variabel dimasukkan untuk mendeklarasikan variabel array, diikuti dengan banyaknya lokasi memori yang ingin dibuat. Namun, jika kita memesan variabel biasa, seperti string atau tipe data sederhana, kita hanya perlu menentukan tipenya. Array adalah nilai-nilai data bertipe sama yang terletak dalam urutan tertentu. subscript atau indeks menunjukkan array. Untuk mendeklarasikan array, kompiler memberikan jumlah memori yang cukup untuk menampung semua elemen sesuai dengan yang dideklarasikan.

### 1. [Array satu dimensi]
Array satu dimensi merupakan tipe variabel yang terdiri dari kumpulan data dari tipe yang sama yang disusun dalam satu baris atau satu dimensi . Array merupakan tipe variabel yang setiap elemen array dapat diakses melalui indeks dan index array dimulai dari 0 bukan 1.
Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2, 3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 merujuk pada elemen pertama, indeks 1 merujuk pada elemen kedua, dan seterusnya hingga indeks 4 merujuk pada elemen kelima.
### 2. [Array dua dimensi]
Array dua dimensi merupakan array yang terdiri dari m buah baris dan n buah kolom. Bentuknya dapat berupa matriks atau tabel. Setiap elemen dalam array dua dimensi memiliki dua indeks: indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen di baris, dan indeks kolom menunjukkan posisi elemen di kolom.
Contoh Deklarasi array (c++) :
    tipe nama_var[ukuran1][ukuran2];
### 3. [array multidimensi]
Beberapa array memiliki tiga dimensi, seperti nilai dalam tiga dimensi ruang, seperti koordinat x, y, dan z dalam koordinat ruang. Meskipun sama dengan array satu dimensi dan dua dimensi, array multidimensi memiliki kapasitas memori yang lebih besar. Mereka digunakan untuk mewakili array dengan dimensi lebih dari dua atau indeks lebih dari dua.
Contoh :
    int data_huruf[2][4][6];
### 4. [Array empat dimensi]
contoh :
    int arr [3][2][4][4];
### 5. [Array lima dimensi]
Contoh :
    int arr [2][4][4][3][3];

## Guided

### 1. [Program input array tiga dimensi]

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
            cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
            cout << arr[x][y][z] << ends;
            }
        cout << endl;
        }
    cout << endl;
    }
}
```
Pada program diatas yaitu mendeklarasikan array tiga dimmensi yang memiliki ukuran yaitu '2 x 3 x 3', yang berarti terdapat dua matriks 3x3. Program juga meminta pengguna memasukkan nilai ke dalam elemen array dengan format 'Array[x][y][z]', setelah array dimasukkan program akan mencetak kembali nilai-nilai yang telah dimasukkan oleh pengguna. Selanjutnya, program akan mencetak ulang nilai-nilai tersebut dengan format matriks untuk tampilan yang lebih rapi dan terstruktur.

## Guided 

### 2. [Program mencari nilai maksimal pada array]

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```
Pada codingan diatas program meminta pengguna memasukkan panjang array yang dibuat. Setelah panjang array dimasukkan, program meminta pengguna untuk memasukkan nilai elemen array. Kemudia program akan mencari nilai maksimum dalam sebuah array menggunakan loop, dan menyimpan nilai maksimum tersebut beserta lokasinya. Lalu, program akan mencetak  nilai maksimum beserta lokasinya.

## Unguided 

### 1. [Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!]

```C++
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
```
#### Output:
![Screenshot_unguided1.png](Screenshot_unguided1)

Program diatas digunakan untuk memisahkan angka genap dan angka ganjil dari array yang telah diinputkan oleh pengguna. Program meminta pengguna untuk memasukkan data array. Kemudian program akan memisahkan angka genap dan ganjil menggunakan loop. Program menyimpan setiap angka genap atau ganjil dalam array. Lalu program akan menampilkan angka genap dan ganjil yang telah dipisahkan.

## Unguided 

### 2. [Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]

```C++
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
```
#### Output:
![Screenshot(1)_unguided2.png](Screenshot(1)_unguided2)
![Screenshot(2)_unguided2.png](Screenshot(2)_unguided2)

Pada codingan diatas memasukkan nilai-nilai ke dalam array tiga dimensi dan menampilkannya dalam bentuk matriks. Program meminta pengguna untuk memasukkan ukuran elemen array tiga dimensi. Kemudian, program akan menginisialisasi array tiga dimensi dengan ukuran yang telah dimasukkan. Setelah semua nilai dimasukkan program akan mencetak nilai-nilai elemen array sesuai dengan indeksnya. Lalu program akan mencetak nilai-nilai elemen array dalam bentuk matriks untuk tampilan yang lebih terstruktur.

## Unguided

### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!]

```C++
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
```
#### Output:
![Screenshot(3)_unguided3.png](Screenshot(3)_unguided3)
![Screenshot(4)_unguided4.png](Screenshot(4)_unguided3)

Kodingan diatas menampilkan menu pilihan untuk mencari nilai maksimum, minimum, atau rata-rata dari elemen tersebut. Program akan meminta pengguna untuk memasukkan jumlah elemen array dan nilai-nilai elemen array. Kemudian program akan menampilkan pilihan menu. Setelah pengguna memilih menu, program akan melakukan perhitungan sesuai dengan pilihan yang dibuat dan menampilkan hasilnya.

## Kesimpulan
Programen harus memahami dan menguasai array.
    - Array dimensi satu, dua, dan tiga memiliki kesamaan dalam konsep dasar penggunaan array, yaitu menyimpan dan mengakses kumpulan data.
    - Untuk menggunakan array multidimensi, Anda perlu memahami pengindeksan, alokasi memori, dan pengolahan data dalam konteks dimensi yang lebih besar.
    - Dalam pemrograman, memahami array multidimensi sangat penting, terutama dalam pengolahan data yang kompleks seperti pengolahan gambar, simulasi fisika, atau pemodelan matematika.
    - Struktur tambahan yang diberikan oleh masing-masing dimensi array memungkinkan penyimpanan dan akses data yang lebih kompleks.
## Referensi
[1] Pemograman Dasar, Modul Praktikum. Array (Larik). 2020.
[2] Kaswidjanti, Wilis, et al. Algoritma Dan Pemrograman Lanjut Pertemuan Ke-2 Array (Larik). 2022.