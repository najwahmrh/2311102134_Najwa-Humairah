# <h1 align="center">Laporan Praktikum Modul SINGLE AND DOUBLE LINKED LIST </h1>
<p align="center"> Najwa Humairah_2311102134 </p>

## Dasar Teori
Senarai berkait (linked list) adalah jenis struktur data di mana simpul (node) terhubung satu sama lain dalam urutan tertentu. Simpul dapat berbentuk struktur atau class, dan simpul harus memiliki satu atau lebih elemen struktur atau class yang mengandung data. Senarai berkait adalah jenis struktur data di mana kumpulan data disusun secara dinamis, sekuensial, dan saling berhubungan. Secara teori, daftar yang dihubungkan didefinisikan sebagai sejumlah node yang dihubungkan secara linier dengan bantuan pointer. Daftar yang dihubungkan satu kali didefinisikan sebagai daftar yang dihubungkan satu kali apabila hanya ada satu pointer yang menghubungkan setiap node single.

Linked list adalah struktur data yang paling dasar, terdiri dari sejumlah unsur yang dikelompokkan, atau terhubung, bersama-sama di suatu deret tertentu. Linked list membantu menyimpan koleksi data, yang sebanding dengan array atau larik yang sering digunakan; namun, linked list menawarkan banyak keuntungan yang lebih besar daripada array atau larik. Secara khusus, linked list lebih efektif dalam melaksanakan penyusunan daftar. 

### 1. [Single linked list]
Single Linked list adalah Daftar terhubung yang setiap simpul pembentuknya mempunyai satu rantai(link) ke simpul lainnya. Pembentukan linked list tunggal memerlukan :

    1. deklarasi tipe simpul
    2. deklarasi variabel pointer penunjuk awal Linked list
    3. pembentukan simpul baru
    4. pengaitan simpul baru ke Linked list yang telah terbentuk

Alamat elemen adalah pointer. Setiap simpul terdiri dari dua bagian: yang pertama disebut bagian isi, informasi, atau data, dan yang kedua disebut bagian pointer, yang berisi alamat dari node berikutnya atau sebelumnya. Elemen awal daftar disebut head dan elemen terakhir disebut tail. Dengan struktur seperti ini, linked list dibentuk dengan menunjuk pointer next elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir daftar. Operasi Single Linked List biasanya mencakup penambahan dan penghapusan simpul pada awal atau akhir daftar serta pencarian dan pengambilan nilai pada simpul tertentu. Single Linked List umumnya lebih efisien dalam penggunaan memori karena struktur datanya hanya memerlukan satu pointer untuk setiap simpul. Ini dibandingkan dengan jenis Linked List lainnya, seperti Double Linked List dan Circular Linked List. Ciri circular linked list berbeda dari single linked list karena penunjuk berikutnya pada node terakhir circular linked list selalu merujuk ke node pertama.

### 2. [Double linked list]
Penggunaan Double Linked List hampir sama dengan penggunaan Single Linked List yang telah kita pelajari sebelumnya. Yang berbeda adalah bahwa Double Linked List menggunakan pointer baru, prev, yang dapat digunakan untuk menggeser mundur sementara tetap mempertahankan pointer next. Double Linked List memiliki tiga elemen penting untuk setiap simpul: elemen data (biasanya nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan operasi penghapusan dan penambahan pada simpul mana saja secara efisien.

    a. Double Linked List lebih fleksibel daripada Single Linked List karena memiliki dua pointer penunjuk (next dan prev), tetapi memerlukan memori tambahan.
    b. Ada 2 jenis Double Linked List, yaitu: Double Linked List Non Circular dan Double Linked List Circular. DLLNC adalah sebuah Linked List yang terdiri dari dua arah pointer, dengan node yang saling terhubung, namun kedua pointernya menunjuk ke NULL.

Keuntungan dari Double Linked List adalah memungkinkan operasi penambahan dan penghapusan pada simpul mana pun dengan efisien, yang membuatnya sangat berguna untuk menjalankan beberapa algoritma yang membutuhkan operasi ini. Selain itu, melakukan traversal list dari depan ke belakang dengan mudah dengan Double Linked List. Karena setiap simpul membutuhkan satu pointer tambahan, Double Linked List membutuhkan lebih banyak memori daripada Single Linked List. Selain itu, operasi penambahan dan penghapusan pada Double Linked List membutuhkan waktu yang lebih lama daripada pada Single Linked List.

## Guided

### 1. [Single linked list]

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
//Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
            cout << "List kosong!" << endl;
        }
    }
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```
Pada program diatas yaitu mengimplementasikan dari single linked list.

## Guided 

### 2. [Double linked list]

```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
Pada codingan diatas program 

## Unguided 

### 1. [Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:]

```C++
#include <iostream>
}
```
#### Output:
![Screenshot_unguided1.png](Screenshot_unguided1.png)

Program diatas digunakan 

## Unguided 

### 2. [Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.]

```C++
#include <iostream>
}
```
#### Output:
![Screenshot(1)_unguided2.png](Screenshot(1)_unguided2.png)

Pada codingan diatas memasukkan 

## Kesimpulan
Programen harus memahami dan menguasai single dan double linked list.
    

## Referensi
[1] ST,M.KOm, Triase. STRUKTUR DATA. 2020.
[2] M.TI, Anita Sindar RMS, ST. STRUKTUR DATA DAN ALGORITMA DENGAN C++. Google Books, CV. AA. RIZKY, 28 Nov. 2019, books.google.com/books?hl=id&lr=&id=GP_ADwAAQBAJ&oi=fnd&pg=PR7&dq=modul+SINGLE+AND+DOUBLE+LINKED+LIST+c%2B%2B&ots=86f0Qs-P8U&sig=5KnO8VZm-t7sNtgREo8oEZSmDEU. Accessed 24 Mar. 2024.