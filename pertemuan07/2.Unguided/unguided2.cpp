// Najwa Humairah
// 2311102134

#include <iostream>

using namespace std;

// Deklarasi struct node
struct node {
    string nama_134;
    string nim_134;
    node *next;
};

node *front; // node depan
node *back;  // node belakang

// Prosedur Inisialisasi node front dan back sebagai NULL
void Inisialisasi_134() {
    front = NULL;
    back = NULL;
}

// Fungsi untuk mengecek apakah queue kosong atau tidak
bool isEmpty_134() {
    return front == NULL;
}

// Prosedur tuntuk menambahkan data pada antrian
void TambahData_134(string name_134, string nim_134) {
    node *baru = new node;
    baru->nama_134 = name_134;
    baru->nim_134 = nim_134;
    baru->next = NULL;
    if (isEmpty_134()) {
        front = back = baru;
    } else {
        back->next = baru;
        back = baru;
    }
}

// Prosedur untuk mngurangi data dari antrian (lanjut ke antrian selanjutnya)
void KurangiAntrian_134() {
    if (isEmpty_134()) {
        cout << "Antrian masih kosong!" << endl;
    } else {
        node *hapus = front;
        front = front->next;
        delete hapus;
        if (front == NULL) {
            back = NULL;
        }
    }
}

// Fungsi untuk menghitung jumlah antrian
int HitungAntrian_134() {
    int jumlah_134 = 0;
    node *hitung = front;
    while (hitung != NULL) {
        hitung = hitung->next;
        jumlah_134++;
    }
    return jumlah_134;
}

// Prosedur untu menghapus semua antrian
void HapusAntrian_134() {
    node *hapus, *bantu = front;
    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    front = back = NULL;
}

// Prosedur untuk mampilkan antrian
void LihatAntrian_134() {
    if (isEmpty_134()) {
        cout << "Antrian kosong!" << endl;
    } else {
        cout << "===== Data antrian =====" << endl;
        node *bantu = front;
        int NomorAntrian_134 = 1;
        while (bantu != NULL) {
            cout << NomorAntrian_134 << ". Nama: " << bantu->nama_134 << ", NIM: " << bantu->nim_134 << endl;
            bantu = bantu->next;
            NomorAntrian_134++;
        }
    }
    cout << endl;
}

int main() {
    Inisialisasi_134();
    
    // Tambah 3 data mahasiswa ke antrian
    TambahData_134("Alya", "2311102130");
    TambahData_134("Kiki", "2311102131");
    TambahData_134("Artika", "2311102133");
    TambahData_134("Najwa","2311102134");
    TambahData_134("Humairah","2311102135");

    // Menampilkan data yang sudah ditambah
    LihatAntrian_134();

    // Mengurangi data
    KurangiAntrian_134();

    // Menampilkan data setelah dikurangi
    LihatAntrian_134();

    // Menghapus semua antrian
    HapusAntrian_134();

    // Menampilkan data setelah dihapus
    LihatAntrian_134();

    return 0;
}