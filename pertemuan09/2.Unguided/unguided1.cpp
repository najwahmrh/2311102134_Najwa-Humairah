// Najwa Humairah
// 2311102134

#include <iostream> 
#include <iomanip> 
#include <string> 

using namespace std;

const int Max_simpul_134 = 2;

// Deklarasi array string yang berisi nama kota
string simpul_134[Max_simpul_134];

// Deklarasi matriks busur yang berisi bobot dari setiap busur antar simpul
int busur[Max_simpul_134][Max_simpul_134];

// Fungsi untuk menampilkan graf
void tampilGraph_134(){
    cout << setw(12) << " ";
    for (int i = 0; i < Max_simpul_134; i++)
    {
        cout << setw(12) << simpul_134[i];
    }
    cout << endl; 

    for (int i = 0; i < Max_simpul_134; i++)
    {
        cout << setw(12) << simpul_134[i] << " "; 
        for (int j = 0; j < Max_simpul_134; j++)
        {
            cout << setw(12) << busur[i][j];
        }
        cout << endl;
    }
}

int main(){
    cout << " Silakan masukkan jumlah simpul : "; 
    int numVertices;
    cin >> numVertices; 

    if (numVertices != Max_simpul_134)
    {
        cout << " Jumlah simpul tidak sesuai dengan konstanta max vertices!." << endl; 
        return 1; 
    }

    cout << " Silakan masukkan nama simpul \n";
    for (int i = 0; i < numVertices; ++i)
    {
        cout << " Simpul " << i + 1 << ": "; 
        cin >> simpul_134[i]; 
    }

    cout << " Silakan masukkan bobot antar simpul \n"; 
    for (int i = 0; i < numVertices; ++i)
    {
        for (int j = 0; j < numVertices; ++j)
        {
            cout << simpul_134[i] << " --> " << simpul_134[j] << " = "; 
            cin >> busur[i][j]; 
        }
    }
    cout << endl; 

    tampilGraph_134(); 

    return 0; 
}