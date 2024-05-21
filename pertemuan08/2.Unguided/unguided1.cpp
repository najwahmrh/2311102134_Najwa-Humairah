//Najwa Humairah
//2311102134

#include <iostream>
#include <string>

using namespace std;
// Fungsi untuk mengurutkan karakter atau huruf kedalam string menggunakan Bubble Sort
void bubbleSort_134(string & Kalimat_134)
{
    int n = Kalimat_134.size();
    // Perulangan untuk semua elemen dalam string
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (Kalimat_134[j] > Kalimat_134[j + 1])
            {
                swap(Kalimat_134[j], Kalimat_134[j + 1]);
            }
        }
    }
}

// Fungsi untuk mencari karakter atau huruf dalam string yang sudah diurutkan menggunakan Binary Search
void binarySearch_134(const string & Kalimat_134, char cari_134)
{
    bool ditemukan = false;
    cout << "====================================================\n";
    cout << " Kata setelah diurutkan: " << Kalimat_134 << endl;
    cout << " Huruf '" << cari_134 << "' ditemukan pada indeks ke : ";
    // Perulangan untuk mencari huruf dalam string
    for (size_t i = 0; i < Kalimat_134.size(); ++i)
    {
        if (Kalimat_134[i] == cari_134)
        {
            ditemukan = true;
            cout << i << " ";
        }
    }
    cout << endl;
    // percabangan apabila huruf tidak ditemukan dalam kata atau huruf
    if (!ditemukan)
    {
        cout << " Huruf '" << cari_134 << "' tidak ditemukan dalam kalimat." << endl;
    }
    cout << "====================================================\n";
}

int main()
{
    // variable kalimat dan cari
    string Kalimat_134;
    char cari_134;
    
    cout << "====================================================\n";
    cout << " Masukkan kalimat : ";
    getline(cin, Kalimat_134);
    cout << "====================================================\n";

    // Urutkan kalimat menggunakan bubble sort
    bubbleSort_134(Kalimat_134);
    cout << " Kalimat setelah Anda urutkan : " << Kalimat_134 << endl;

    cout << " Masukkan huruf yang ingin Anda cari : ";
    cin >> cari_134;

    // Cari huruf dalam kalimat menggunakan binary search
    binarySearch_134(Kalimat_134, cari_134);

    return 0;
}