#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Map digunakan untuk menyimpan informasi umur mahasiswa berdasarkan nama
    map<string, int> umurMahasiswa_134;

    // Menambahkan data umur mahasiswa ke dalam map
    umurMahasiswa_134["Vanetha Smith"] = 20;
    umurMahasiswa_134["Clarista Valeska"] = 21;
    umurMahasiswa_134["zharifa Wulan"] = 19;

    // Menampilkan informasi umur mahasiswa
    cout << "Informasi Umur Mahasiswa" << endl;
    for (const auto& pair : umurMahasiswa_134) {
        cout << "Nama: " << pair.first << ", Umur: " << pair.second << " tahun" << endl;
    }

    // Mengakses umur mahasiswa dengan nama tertentu
    string namaMahasiswa_134 = "Clarista Valeska";
    cout << "Umur Mahasiswa " << namaMahasiswa_134 << ": " << umurMahasiswa_134[namaMahasiswa_134] << " tahun" << endl;

    return 0;
}
