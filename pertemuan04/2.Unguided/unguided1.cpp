// Najwa Humairah
// 2311102134

#include <iostream>
using namespace std;

/// PROGRAM SINGLE LINKED LIST NON-CIRCULAR
// Deklarasi Struct Node
struct Node
{
    string nama;
    string nim;
    Node *next;
};
Node *head;
Node *tail;

// Inisialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool isEmpty()
{
    if (head == NULL)
        return true;
    else
        return false;
}

// Tambah Depan
void insertDepan(string nama, string nim)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;
    if (isEmpty() == true)
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
    baru->next = head;
    head = baru;
    }
}

// Tambah Belakang
void insertBelakang(string nama, string nim)
{
    // Buat Node baru
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;
    if (isEmpty() == true)
    {
    head = tail = baru;
    tail->next = NULL;
    }
    else
    {
    tail->next = baru;
    tail = baru;
    }
}

// Hitung Jumlah List
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

// Tambah Tengah
void insertTengah(string nama, string nim, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
    cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->nama = nama;
        baru->nim = nim;
        // tranversing
        bantu = head;
        int nomor = 1;
        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// Hapus Depan
void hapusDepan()
{
    Node *hapus;
    if (isEmpty() == false)
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// Hapus Belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false)
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// Hapus Tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;
    if (posisi < 1 || posisi > hitungList())
    {
    cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
    cout << "Posisi bukan posisi tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;
        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }
            if (nomor == posisi)
            {
                cout << "Data " << bantu->nama;
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

// Ubah Depan
void ubahDepan(string nama, string nim)
{
    cout << "Data " << head->nama;
    if (isEmpty() == false)
    {
        head->nama = nama;
        head->nim = nim;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Tengah
void ubahTengah(string nama, string nim, int posisi)
{
    Node *bantu;
    if (isEmpty() == false)
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;
            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }
            cout << "Data " << bantu->nama;
            bantu->nama = nama;
            bantu->nim = nim;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Ubah Belakang
void ubahBelakang(string nama, string nim)
{
    cout << "Data " << tail->nama;
    if (isEmpty() == false)
    {
        tail->nama = nama;
        tail->nim = nim;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// Hapus List
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// Tampilkan List
void tampil()
{
    cout << "======DATA MAHASISWA======" << endl;
    cout << "Nama    NIM" << endl;
    Node *bantu;
    bantu = head;
    if (isEmpty() == false)
    {
        while (bantu != NULL)
        {
            cout << bantu->nama << "\t";
            cout << bantu->nim << endl;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();
    string nama, nim;
    int pilihan, posisi;
    char ulang;
    do
    {
        cout << endl;
        cout << "---------------------- Najwa Humairah ---------------------" << endl;
        cout << "------------------------ 2311102134 -----------------------" << endl;
        cout << "========= Program Single Linked List Non Circular =========" << endl;
        cout << "1. Tambah Data Depan" << endl;
        cout << "2. Tambah Data Belakang" << endl;
        cout << "3. Tambah Data Tengah" << endl;
        cout << "4. Ubah Data Depan" << endl;
        cout << "5. Ubah Data Belakang" << endl;
        cout << "6. Ubah Data Tengah" << endl;
        cout << "7. Hapus Data Depan" << endl;
        cout << "8. Hapus Data Belakang" << endl;
        cout << "9. Hapus Data Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampilkan" << endl;
        cout << "12. Keluar" << endl;
        cout << "===========================================================" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> pilihan;
        cout << endl;

        switch (pilihan)
        {
        case 1:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            insertDepan(nama, nim);
            cout << "Data " << nama << " berhasil diinput!";
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            insertBelakang(nama, nim);
            cout << "Data " << nama << " berhasil diinput!";
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            insertTengah(nama, nim, posisi);
            cout << "Data " << nama << " berhasil diinput!";
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            ubahDepan(nama, nim);
            cout << " telah diganti dengan data " << nama << "!\n";
            break;
        }
        case 5:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            ubahBelakang(nama, nim);
            cout << " telah diganti dengan data " << nama << "!\n";
            break;
        }
        case 6:
        {
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan NIM : ";
            cin >> nim;
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            ubahTengah(nama, nim, posisi);
            cout << " telah diganti dengan data " << nama << "!\n";
            break;
        }
        case 7:
        {
            cout << "Data " << head->nama << " berhasil dihapus!\n";
            hapusDepan();
            break;
        }
        case 8:
        {
            cout << "Data " << tail->nama << " berhasil dihapus!\n";
            hapusBelakang();
            break;
        }
        case 9:
        {
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            hapusTengah(posisi);
            cout << " berhasil dihapus!\n";
            break;
        }
        case 10:
        {
            clearList();
            cout << "Seluruh Data Telah Dihapus" << endl;
            break;
        }
        case 11:
        {
            tampil();
            break;
        }
        case 12:
        {
            return 0;
        }
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }
        cout << "Lanjutkan memilih menu?(y/n): ";
        cin >> ulang;
    } while (ulang == 'y');
    return 0;
}