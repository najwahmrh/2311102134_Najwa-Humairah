#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

class Node {
public:
    string namaProduk_134;
    double harga_134;
    Node* prev;
    Node* next;

    Node(string nama, double harga_134) : namaProduk_134(nama), harga_134(harga_134), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    void add_data_134(string namaProduk_134, double harga_134) {
        Node* newNode = new Node(namaProduk_134, harga_134);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void tambahDataUrutanTertentu(string namaProduk_134, double harga_134, int posisi) {
        if (posisi < 1) {
            cout << "Posisi tidak valid" << endl;
            return;
        }

        Node* newNode = new Node(namaProduk_134, harga_134);
        if (posisi == 1 || head == nullptr) {
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            head = newNode;
        } else {
            Node* current = head;
            int pos = 1;
            while (current != nullptr && pos < posisi - 1) {
                current = current->next;
                pos++;
            }
            if (current == nullptr) {
                cout << "Posisi tidak valid" << endl;
                return;
            }
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            }
            current->next = newNode;
        }
    }

    void hapusData(string namaProduk_134) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk_134 == namaProduk_134) {
                if (current->prev) {
                    current->prev->next = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                }
                if (current == head) {
                    head = current->next;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan" << endl;
    }

    void updateData(string namaProduk_134, string new_namaProduk_134, double newHarga_134) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk_134 == namaProduk_134) {
                current->namaProduk_134 = new_namaProduk_134;
                current->harga_134 = newHarga_134;
                return;
            }
            current = current->next;
        }
        cout << "Produk tidak ditemukan" << endl;
    }

    void hapusSeluruhData() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }

    void hapusDataUrutanTertentu(int posisi) {
        if (posisi < 1) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        Node* current = head;
        int pos = 1;
        while (current != nullptr && pos < posisi) {
            current = current->next;
            pos++;
        }
        if (current == nullptr) {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        if (current->prev) {
            current->prev->next = current->next;
        }
        if (current->next) {
            current->next->prev = current->prev;
        }
        if (current == head) {
            head = current->next;
        }
        delete current;
    }

    void tampilkanData() {
        if (head == nullptr) {
            cout << "Tidak ada data yang tersedia" << endl;
            return;
        }
        cout << left << setw(20) << "Nama Produk" << "Harga" << endl;
        Node* current = head;
        while (current != nullptr) {
            cout << left << setw(20) << current->namaProduk_134 << current->harga_134 << endl;
            current = current->next;
        }
    }
};

int main() {
    DoublyLinkedList list;

    // add data awal penjualan skincare purwokerto
    cout << "=============Daftar Produk=============" << endl;
    list.add_data_134("Originote", 60000);
    list.add_data_134("Somethinc", 150000);
    list.add_data_134("Skintific", 100000);
    list.add_data_134("Wardah", 50000);
    list.add_data_134("Hanasui", 30000);

    int pilihan;
    do {
        cout << "=====Toko Skincare======" << endl;
        cout << "1. Tambah Produk" << endl;
        cout << "2. Hapus Produk" << endl;
        cout << "3. Update Produk" << endl;
        cout << "4. Tambah produk berdasarkan urutan" << endl;
        cout << "5. Hapus produk berdasarkan urutan" << endl;
        cout << "6. Hapus Seluruh produk" << endl;
        cout << "7. Tampilkan Produk" << endl;
        cout << "8. Exit" << endl;

        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        string namaProduk_134, new_namaProduk_134;
        double harga_134, newHarga_134;
        int posisi;

        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Produk: ";
                cin >> namaProduk_134;
                cout << "Masukkan Harga: ";
                cin >> harga_134;
                list.add_data_134(namaProduk_134, harga_134);
                break;
            case 2:
                cout << "Masukkan Nama Produk yang akan dihapus: ";
                cin >> namaProduk_134;
                list.hapusData(namaProduk_134);
                break;
            case 3:
                cout << "Masukkan Nama Produk yang akan diupdate: ";
                cin >> namaProduk_134;
                cout << "Masukkan Nama Produk baru: ";
                cin >> new_namaProduk_134;
                cout << "Masukkan Harga baru: ";
                cin >> newHarga_134;
                list.updateData(namaProduk_134, new_namaProduk_134, newHarga_134);
                break;
            case 4:
                cout << "Masukkan Nama Produk baru: ";
                cin >> namaProduk_134;
                cout << "Masukkan Harga: ";
                cin >> harga_134;
                cout << "Masukkan Urutan: ";
                cin >> posisi;
                list.tambahDataUrutanTertentu(namaProduk_134, harga_134, posisi);
                break;
            case 5:
                cout << "Masukkan Urutan produk yang akan dihapus: ";
                cin >> posisi;
                list.hapusDataUrutanTertentu(posisi);
                break;
            case 6:
                list.hapusSeluruhData();
                cout << "Produk pada posisi" << posisi << "berhasil dihapus" << endl;
                break;
            case 7:
                list.tampilkanData();
                break;
            case 8:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali!." << endl;
        }
    } while (pilihan != 8);

    return 0;
}