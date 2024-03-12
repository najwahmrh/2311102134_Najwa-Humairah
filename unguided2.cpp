#include <iostream>
#include <string>

using namespace std;

// Struct untuk menyimpan informasi mahasiswa
struct Mahasiswa {
    string nama_134;
    int nim_134;

    // Member function untuk menampilkan informasi mahasiswa
    void display() {
        cout << "Mahasiswa:" << endl;
        cout << "Nama: " << nama_134 << endl;
        cout << "NIM: " << nim_134 << endl;
    }
};

// Class untuk merepresentasikan sebuah buku
class Buku {
private:
    string judul_134;
    string penulis_134;
    int tahunTerbit_134;

public:
    // Constructor untuk menginisialisasi objek Buku
    Buku(string jdl, string pen, int tahun) : judul_134(jdl), penulis_134(pen), tahunTerbit_134(tahun) {}

    // Metode untuk menampilkan informasi buku
    void display() {
        cout << "\nInformasi Buku:" << endl;
        cout << "Judul: " << judul_134 << endl;
        cout << "Penulis: " << penulis_134 << ", Tahun Terbit: " << tahunTerbit_134 << endl;
    }
};

int main(){
    // Membuat objek Mahasiswa
    Mahasiswa mahasiswa;
    mahasiswa.nama_134 = "Najwa Humairah";
    mahasiswa.nim_134 = 11102134;

    // Memanggil member function untuk menampilkan informasi mahasiswa
    mahasiswa.display();

    // Membuat objek Buku
    Buku buku("Pemrograman C++", "John kelvin", 2022);

    // Memanggil member function untuk menampilkan informasi buku
    buku.display();

    return 0;
}
