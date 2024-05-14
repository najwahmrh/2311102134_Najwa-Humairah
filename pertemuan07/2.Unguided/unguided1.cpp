// Najwa Humairah
// 2311102134

#include<iostream>

using namespace std;

//Deklarasi struct node
struct node{ 
    string data_134;
    node *next;
};
    node *front; 
    node *back; 

//Prosedur inisialisasi node front dan back sebagai NULL
void Inisialisasi_134(){ 
    front = NULL;
    back = NULL;
}

//Fungsi untuk mengecek apakah queue kosong atau tidak
bool isEmpty_134(){
    if (front == 0){
        return true; 
    } else {
        return false; 
    }
}

//Prosedur untuk menambahkan data pada antrian
void TambahData_134(string data_134){
    node *baru = new node; 
    baru->data_134 = data_134; 
    baru->next = NULL; 
    if(isEmpty_134() == true){ 
        front = back = baru; 
        back->next = NULL; 
    } else if(isEmpty_134() == false){ 
        back->next = baru; 
        back = baru; 
    }
}

//Prosedur untuk mengurangi antrian (lanjut ke antrian selanjutnya)
void KurangiAntrian_134(){
    node *hapus; 
    if(isEmpty_134() == true){ 
        cout << "Antrian masih kosong!" << endl;
    } else if(isEmpty_134() == false){ 
        if(front->next != NULL){ 
            hapus = front; 
            front = front->next; 
            delete hapus; 
        } else { 
            front = back = NULL; 
        }
    }
}

//Fungsi untuk menghitung jumlah antrian
int HitungAntrian_134(){
    node * hitung; 
    hitung = front; 
    int jumlah_134 = 0; 
    while(hitung != NULL){ 
        hitung = hitung->next; 
        jumlah_134++; 
    }
    return jumlah_134; 
}

//Prosedur untuk menghapus seluruh antrian
void HapusAntrian_134(){
    node * hapus, * bantu; 
    bantu = front; 
    while(bantu != NULL){ 
        hapus = bantu; 
        bantu = bantu->next; 
        delete hapus; 
    }
    front = back = NULL; 
}

//Prosedur untuk menampilkan antrian
void LihatAntrian_134(){
    node * bantu; 
    bantu = front; 
    if(isEmpty_134() == true){ 
        cout << "Antrian kosong!" << endl; 
    } else if(isEmpty_134() == false){ 
        cout << "===== Data Antrian =====" << endl;  
        int NomorAntrian_134 = 1; 
        while(bantu != NULL){ 
            cout << NomorAntrian_134 << ". " << bantu->data_134 << endl; 
            bantu = bantu->next; 
            NomorAntrian_134++; 
        }
    }
    cout << endl;
}

int main(){
    //Menambah 3 data nama kedalam antrian
    TambahData_134("Alya");
    TambahData_134("Kiki");
    TambahData_134("Artika");

    //Menampilkan data yang sudah ditambahkan
    LihatAntrian_134();

    //Mengurangi data
    KurangiAntrian_134();

    //menampilkan data setelah dikurangi
    LihatAntrian_134();

    //Menghapus seluruh antrian
    HapusAntrian_134();

    //menampilkan data setelah dihapus
    LihatAntrian_134();
    
    return 0;
}