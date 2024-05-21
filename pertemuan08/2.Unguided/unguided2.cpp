//Najwa Humairah
//2311102134

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // variable menampung kalimat dan total huruf vokal
    string kalimat_134;
    int jumlahVokal_134 = 0;

    cout << "==============================================\n";
    cout << " Masukkan kalimat : ";
    getline(cin, kalimat_134);
    cout << "==============================================\n";

    // perulangan apakah huruf dan kalimat sama atau tidak
    for (char huruf_134 : kalimat_134)
    {
        if (huruf_134 == 'a' || huruf_134 == 'e' || huruf_134 == 'i' || huruf_134 == 'o' || huruf_134 == 'u' || huruf_134 == 'A' || huruf_134 == 'E' || huruf_134 == 'I' || huruf_134 == 'O' || huruf_134 == 'U')
        {
            jumlahVokal_134++;
        }
    }
    
    // Menampilkan jumlah total huruf vokal
    cout << " Kalimat : " << kalimat_134 << endl;
    cout << "==============================================\n";
    cout << " Jumlah huruf vokal dalam kalimat : " << jumlahVokal_134 << endl;
    cout << "==============================================\n";

    return 0;
}
