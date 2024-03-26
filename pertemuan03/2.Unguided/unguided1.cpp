#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Mendeklarasikan struct Node
struct Node {
    string nama_134;
    int umur_134;
    Node *next;
};
    Node *head; // deklarasi node sebagai head
    Node *tail; // deklarasi node sebagai tail

// Menginisialisasi Node
void inisialisasi_134(){
    head = NULL;
    tail = NULL;
}

// Pengecekan NULL
bool isEmpty_134(){
    if (head == NULL){
        return true;
    }else {
        return false;
    }
}

// Prosedure untuk memasukkan data 
// Prosedure untuk memasukkan insert depan
void insertDepan_134(string nama_134, int umur_134)
{
    Node *baru = new Node; // tambah node baru
    baru->nama_134 = nama_134; // isi node baru
    baru->umur_134 = umur_134; // isi node baru
    baru->next = NULL; // next node nya NULL
    if (isEmpty_134() == true){
        head = tail = baru;    
    }else {
        baru->next = head;
        head = baru;
    }
}

// Prosedure untuk insert belakang
void insertBelakang_134(string nama_134, int umur_134)
{
    Node *baru = new Node; // tambah node baru
    baru->nama_134 = nama_134; // isi node baru
    baru->umur_134 = umur_134; // isi node baru
    baru->next = NULL;
    if (isEmpty_134() == true){
        head = tail = baru;
    }else {
        tail->next = baru;
        tail = baru;
    }
}

// Prosedure untuk insert tengah
void insertTengah_134(string nama_134, int umur_134, int posisi_134)
{
    Node *baru = new Node;
    baru->nama_134 = nama_134;
    baru->umur_134 = umur_134;
    baru->next = NULL;
    if (isEmpty_134() == true){
        head = tail = baru;
    }else {
        Node *bantu = head;
        int nomor = 1; // deklarasi variabel nomor
        while (nomor < posisi_134 - 1){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Fungsi Hitung Node
int hitungNode_134(){
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != NULL){ // perulangan while
        jumlah++; // deklarasi variabel jumlah
        hitung = hitung->next;
    }
    return jumlah;
}

// Untuk menghapus data
// Prosedure untuk hapus depan
void hapusDepan_134(){
    if (isEmpty_134() == false){
        if (head->next != NULL){
            Node *hapus = head;
            head = head->next;
            delete hapus;
        }else {
            head = tail = NULL;
        }
    }else {
        cout << "List masih kosong!" << endl;
    }
}

// Prosedure untuk hapus belakang
void hapusBelakang_134(){
    if (isEmpty_134() == false){
        if (head->next != NULL){
            Node *hapus = tail;
            Node *bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next; // node bantu berlanjut ke next dari bantu
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus; // delete node hapus
        }else {
            head = tail = NULL;
        }
    }else {
        cout << "List masih kosong!" << endl;
    }
}
// Prosedure untuk hapus tengah
void hapusTengah_134(int posisi_134){
    if (posisi_134 < 1 || posisi_134 > hitungNode_134()){
        cout << "Posisi node yang akan dihapus diluar jangkauan" << endl;
    }else if (posisi_134 == 1){
        cout << "Posisi nodeyang ingin dihapus bukan posisi tengah" << endl;
    }else {
        Node *hapus = head;
        Node *bantu = head;
        int nomor = 1;
        while (nomor < posisi_134 - 1){
            bantu = bantu->next;
            nomor++;
        }
        hapus = bantu->next;
        bantu->next = hapus->next;
        delete hapus;
    } 
}

// Untuk ubah data
// Prosedure untuk mengubah depan
void ubahDepan_134(string nama_134, int umur_134){
    if (isEmpty_134() == false){
        head->nama_134 = nama_134;
        head->umur_134 = umur_134;
    }else {
        cout << "List masih kosong!" << endl;
    }
}

// Prosedure untuk mengubah belakang
void ubahBelakang_134(string nama_134, int umur_134){
    if (isEmpty_134() == false){
        tail->nama_134 = nama_134;
        tail->umur_134 = umur_134;
    }else {
        cout << "List masih kosong!" << endl;
    }
}

// Prosedure untuk mengubah tengah
void ubahTengah_134(string nama_134, int umur_134, int posisi_134){
    if (posisi_134 < 1 || posisi_134 > hitungNode_134()){
        cout << "Posisi diluar jangkauan" << endl;
    }else if (posisi_134 == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }else {
        Node *bantu = head;
        int nomor = 1;
        while (nomor < posisi_134){
            bantu = bantu->next;
            nomor++;
        }
        bantu->nama_134 = nama_134;
        bantu->umur_134 = umur_134;    
    } 
}

// Prosedure untuk menghapus semua data
void hapusSemua_134(){
    if (isEmpty_134() == false){
        Node *bantu = head;
        while (bantu != NULL){
            Node *hapus = bantu;
            bantu = bantu->next;
            delete hapus;
        }
        head = tail = NULL;
    }else {
        cout << "List masih kosong!" << endl;
    }
}

// Prosedure untuk menampilkan display
void display_134(){
    Node *bantu = head;
    if (!isEmpty_134()){
        cout << "|=========================|" << endl;
        cout << "|    Nama    |    Umur    |" << endl;
        cout << "|=========================|" << endl;
        while (bantu != NULL){
            cout << "| " << setw(10) << left << bantu->nama_134<< " | " << setw(10) << left << bantu->umur_134 << " |" << endl;
            bantu = bantu->next;
        }
        cout << "|-------------------------|" << endl;
    }else {
        cout << "List masih kosong!" << endl;
    }
}

int main(){
    
    //Untuk inisialisasi
    inisialisasi_134();
    //Untuk menambahkan data diawali
    insertDepan_134("Karin", 18);
    insertDepan_134("Hoshino", 18);
    insertDepan_134("Akechi", 20);
    insertDepan_134("Yusuke", 19);
    insertDepan_134("Michael", 18);
    insertDepan_134("Jane", 20);
    insertDepan_134("John", 19);

    //Untuk menampilkan data diawali
    cout << "Data Mahasiswa : " << endl;
    display_134();
    cout << endl;

    //Pilihan Menu
    int pilihan_134;
    string nama_134;
    int umur_134;
    int posisi_134;
    do{
        cout << "===== Data Mahasiswa =====" << endl;
        cout << "1. Tambahkan Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Update Data Mahasiswa" << endl;
        cout << "4. Tambahkan Data Mahasiswa Urutan Tertentu" << endl;
        cout << "5. Hapus Data Mahasiswa Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data Mahasiswa" << endl;
        cout << "7. Tampilkan Data Mahasiswa" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilihan: ";
        cin >> pilihan_134;

        switch(pilihan_134){
            //Menambahkan data
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama_134;
                cout << "Masukkan Umur: ";
                cin >> umur_134;
                insertDepan_134(nama_134, umur_134);
                break;
            //Menghapus data    
            case 2:
                hapusDepan_134();
                break;
            //Mengubah data    
            case 3:
                cout << "Masukkan Nama: "; cin >> nama_134;
                cout << "Masukkan Umur: "; cin >> umur_134;
                cout << "Masukkan Posisi: "; cin >> posisi_134;
                ubahTengah_134(nama_134, umur_134, posisi_134);
                break;
            //Menambahkan data di posisi antara   
            case 4:
                cout << "Masukkan Nama: "; cin >> nama_134;
                cout << "Masukkan Umur: "; cin >> umur_134;
                cout << "Masukkan Posisi: "; cin >> posisi_134;
                insertTengah_134(nama_134, umur_134, posisi_134);
                break;
            //Menghapus data di posisi antara    
            case 5:
                cout << "Masukkan Posisi: ";
                cin >> posisi_134;
                cout << "Masukkan Nama Mahasiswa yang akan dihapus: ";
                cin >> nama_134;
                cout << "Masukkan Umur Mahsiswa yang akan dihapus: ";
                cin >> umur_134;
                hapusTengah_134(posisi_134);
                break;
            //Menghapus semua data    
            case 6:
                hapusSemua_134();
                break;
            //Menampilkan semua data    
            case 7:
                cout << "Tampilan Seluruh Data Mahasiswa" << endl;
                display_134();
                break;
            //Program selesai    
            case 8:
                cout << "Anda keluar dari program. Program selesai!" << endl;
                break;
            default:
                cout << "Pilihan yang anda masukkan tidak tersedia" << endl;
                break;
        }
    }
    while(pilihan_134 != 8);
    return 0;   
}