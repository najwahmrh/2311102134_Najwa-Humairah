#include <iostream>
#include <cmath>

using namespace std;

float hitungLuasPersegi_134(int sisi_134){
    return sisi_134*sisi_134;
}

float hitungVolumeKubus_134(int sisi_134){
    return sisi_134*sisi_134*sisi_134;
}

int main(){
    //Mendefenisikan variabel dengan menggunakan tipe data int
    int panjangSisi;

    cout << "Masukkan panjang sisi persegi :";
    cin >> panjangSisi;

    float luasPersegi = hitungLuasPersegi_134(panjangSisi);
    cout << "luas persegi dengan sisi " << panjangSisi << "adalah :" << luasPersegi << endl;
    float volumeKubus = hitungVolumeKubus_134(panjangSisi);
    cout << "Volume kubus dengan sisi " << panjangSisi << "adalah :" << volumeKubus << endl;

    return 0;

}
