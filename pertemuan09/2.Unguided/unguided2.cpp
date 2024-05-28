// Najwa Humairah
// 2311102134

#include <iostream> 
#include <iomanip> 

using namespace std;

// Struktur data Pohon untuk merepresentasikan node dalam tree
struct Pohon{
    char data_134; 
    Pohon *left;               
    Pohon *right;              
    Pohon *parent;             
};

// Deklarasi pointer root dan baru untuk tree
Pohon *root, *baru;

// Fungsi untuk menginisialisasi tree
void init(){
    root = NULL; 
}

// Fungsi untuk memeriksa apakah tree kosong
bool isEmpty(){
    return root == NULL; 
}

// Fungsi untuk membuat node baru sebagai root
void buatNode(char data){
    if (isEmpty()){
        root = new Pohon();                 
        root->data_134 = data; 
        root->left = NULL;                  
        root->right = NULL;                 
        root->parent = NULL;                
        cout << "\n Node " << data << " berhasil dibuat sebagai root." << endl;
    } else{
        cout << "\n Tree sudah ada!" << endl; // Pesan jika tree sudah ada
    }
}

// Fungsi untuk menambahkan node di anak kiri
Pohon *insertLeft(char data, Pohon *node){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL; 
    } else{
        if (node->left != NULL){
            cout << "\n Node " << node->data_134 << " sudah ada child kiri !" << endl;
            return NULL; 
        } else{
            Pohon *baru = new Pohon();          
            baru->data_134 = data; 
            baru->left = NULL;                  
            baru->right = NULL;                 
            baru->parent = node;                
            node->left = baru;                 
            cout << "\n Node " << data << " berhasil ditambahkan ke child kiri " << baru->parent->data_134<< endl;
            return baru; 
        }
    }
}

// Fungsi untuk menambahkan node di anak kanan
Pohon *insertRight(char data, Pohon *node){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL; 
        } else{
        if (node->right != NULL){
            cout << "\n Node " << node->data_134 << " sudah ada child kanan !" << endl;
            return NULL; 
        } else{
            Pohon *baru = new Pohon();          
            baru->data_134= data; 
            baru->left = NULL;                  
            baru->right = NULL;               
            baru->parent = node;                
            node->right = baru;                
            cout << "\n Node " << data << " berhasil ditambahkan ke child kanan " << baru->parent->data_134 << endl;
            return baru; 
        }
    }
}

// Fungsi untuk mengupdate data di node
void update(char data, Pohon *node){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (!node){
            cout << "\n Node yang ingin diganti tidak ada!!" << endl; 
        } else {
            char temp = node->data_134;                                   
            node->data_134= data;                                        
            cout << "\n Node " << temp << " berhasil diubah menjadi " << data << endl; 
        }
    }
}

// Fungsi untuk menampilkan data di node
void retrieve(Pohon *node){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (!node){
            cout << "\n Node yang ditunjuk tidak ada!" << endl; 
        } else{
            cout << "\n Data node : " << node->data_134<< endl;
        }
    }
}

// Fungsi untuk menemukan dan menampilkan informasi tentang node dalam pohon
void find(Pohon *node){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl;
    } else{
        if (!node){
            cout << "\n Node yang ditunjuk tidak ada!" << endl; 
        } else{
            cout << "\n Data Node : " << node->data_134 << endl; 
            cout << " Root : " << root->data_134 << endl;        

            // Tampilkan informasi tentang sibling node
            if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
                cout << " Sibling : " << node->parent->left->data_134 << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << " Sibling : " << node->parent->right->data_134 << endl;
            else
                cout << " Sibling : (tidak punya sibling)" << endl;

            // Tampilkan informasi tentang child node kiri
            if (!node->left)
                cout << " Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << " Child Kiri : " << node->left->data_134 << endl;

            // Tampilkan informasi tentang child node kanan
            if (!node->right)
                cout << " Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << " Child Kanan : " << node->right->data_134 << endl;
        }
    }
}

// Fungsi untuk melakukan traversal PreOrder pada pohon
void preOrder(Pohon *node = root){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (node != NULL){
            cout << node->data_134 << ", ";
            preOrder(node->left);                       
            preOrder(node->right);                       
        }
    }
}

// Fungsi untuk melakukan traversal InOrder pada pohon
void inOrder(Pohon *node = root) {
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (node != NULL){
            inOrder(node->left);                         
            cout << node->data_134 << ", "; 
            inOrder(node->right);                        
        }
    }
}

// Fungsi untuk melakukan traversal PostOrder pada pohon
void postOrder(Pohon *node = root){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (node != NULL){
            postOrder(node->left);                       
            postOrder(node->right);                      
            cout << node->data_134 << ", "; 
        }
    }
}

// Fungsi untuk menghapus subtree yang dimulai dari node yang diberikan
void deleteSubtree(Pohon *node){
    if (node == NULL) 
        return;

    // Hapus subtree secara rekursif
    deleteSubtree(node->left);
    deleteSubtree(node->right);

    // Hapus hubungan parent dengan node
    if (node->parent != NULL && node->parent->left == node){
        node->parent->left = NULL;
    }else if (node->parent != NULL && node->parent->right == node){
        node->parent->right = NULL;
    }

    // Tampilkan pesan bahwa node berhasil dihapus
    cout << "\n Node " << node->data_134 << " berhasil dihapus." << endl;

    // Hapus node dari memory
    delete node;
}

// Fungsi untuk menampilkan informasi tentang child dan descendant
void showChildAndDescendant(Pohon *node) {
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
    } else{
        if (!node){
            cout << "\n Node yang ditunjuk tidak ada!" << endl; 
        } else{
            cout << "\n Data Node : " << node->data_134 << endl; 
            if (!node->left){
                cout << " Child Kiri : (tidak punya Child kiri)" << endl; 
            } else{
                cout << " Child Kiri : " << node->left->data_134 << endl; 
                cout << " Descendant dari Child Kiri : ";
                inOrder(node->left); 
                cout << endl;
            }

            if (!node->right){
                cout << " Child Kanan : (tidak punya Child kanan)" << endl; 
            } else{
                cout << " Child Kanan : " << node->right->data_134 << endl; 
                cout << " Descendant dari Child Kanan : ";
                inOrder(node->right); 
                cout << endl;
            }
        }
    }
}

// Deklarasi fungsi findParent
void findParent(Pohon *node, char parentData, Pohon *&parentNode){
    if (node == NULL) 
        return;

    if (node->data_134 == parentData){
        parentNode = node; 
        return;
    }

    // Telusuri subtree secara rekursif
    findParent(node->left, parentData, parentNode);
    findParent(node->right, parentData, parentNode);
}

// Fungsi untuk menghitung ukuran tree
int size(Pohon *node = root){
    if (isEmpty()) {
        cout << "\n Buat tree terlebih dahulu!!" << endl; 
        return 0;
    } else{
        if (!node){
            return 0; 
        } else{
            return 1 + size(node->left) + size(node->right); 
        }
    }
}


// Fungsi untuk menghitung tinggi tree
int height(Pohon *node = root){
    if (isEmpty()){
        cout << "\n Buat tree terlebih dahulu!" << endl; 
        return 0;
    } else{
        if (!node){
            return 0; 
        } else{
            int heightKiri = height(node->left); 
            int heightKanan = height(node->right); 
            if (heightKiri >= heightKanan){
                return heightKiri + 1; 
            } else{
                return heightKanan + 1; 
            }
        }
    }
}
// Fungsi untuk menampilkan karakteristik tree
void characteristic() {
    cout << "\n Size Tree : " << size() << endl; 
    cout << " Height Tree : " << height() << endl; 
    cout << " Average Node of Tree : " << size() / height() << endl; 
}

int main(){
    int pil;   
    char data; 

    // Loop utama program
    do{
        cout << "\n||=====================================||";
        cout << "\n||      ==  Pemograman Tree C++ ==     ||";
        cout << "\n||=====================================||";
        cout << "\n||                MENU                 ||";
        cout << "\n||=====================================||";
        cout << "\n|| 1. Tambah Node Root                 ||"; 
        cout << "\n|| 2. Tambah Kiri                      ||";
        cout << "\n|| 3. Tambah Kanan                     ||";
        cout << "\n|| 4. Update Data                      ||";
        cout << "\n|| 5. Lihat/Retrive Data               ||";
        cout << "\n|| 6. Cari Data                        ||";
        cout << "\n|| 7. Traversal PreOrder               ||";
        cout << "\n|| 8. Traversal InOrder                ||";
        cout << "\n|| 9. Traversal PostOrder              ||";
        cout << "\n|| 10. Hapus Subtree                   ||";
        cout << "\n|| 11. Hapus Seluruh Tree              ||";
        cout << "\n|| 12. Karakteristik Tree              ||";
        cout << "\n|| 13. Tampilkan Child dan Descendant  ||";
        cout << "\n|| 0. Exit                             ||";
        cout << "\n||=====================================||";
        cout << "\n   Pilih menu :";

        cin >> pil; 

        switch (pil){
        case 1: 
            cout << "\n Input data : ";
            cin >> data;
            buatNode(data);
            break;

        case 2: 
        {
            cout << "\n Input data : ";
            cin >> data;
            char parentData;
            cout << " Input parent data: ";
            cin >> parentData;
            Pohon *parentNode = NULL;

            // Cari parent node berdasarkan parentData
            findParent(root, parentData, parentNode);

            if (parentNode){
                insertLeft(data, parentNode);
            } else{
                cout << "\n Parent node tidak ditemukan!" << endl;
            }
            break;
        }

        case 3: 
        {
            cout << "\n Input data : ";
            cin >> data;
            char parentData;
            cout << " Input parent data: ";
            cin >> parentData;
            Pohon *parentNode = NULL;

            // Cari parent node berdasarkan parentData
            findParent(root, parentData, parentNode);

            if (parentNode){
                insertRight(data, parentNode);
            } else{
                cout << "\n Parent node tidak ditemukan!" << endl;
            }
            break;
        }

        case 4: 
        {
            cout << "\n Input data baru : ";                 
            cin >> data;                                     
            char nodeData;                                   
            cout << " Input data node yang ingin diupdate: "; 
            cin >> nodeData;                                 
            Pohon *node = root;

            // Loop untuk mencari node yang ingin diupdate berdasarkan datanya
            while (node && node->data_134 != nodeData){
                if (node->left && node->left->data_134 == nodeData){
                    node = node->left; 
                } else if (node->right && node->right->data_134 == nodeData){
                    node = node->right; 
                } else if (node->left){
                    node = node->left; 
                } else if (node->right){
                    node = node->right;
                } else{
                    node = NULL; 
                }
            } if (node){
                update(data, node); 
            } else{
                cout << "\n Node tidak ditemukan!" << endl; 
            }
            break; 
        }

        case 5:
        {
            char nodeData;                                  
            cout << "Input data node yang ingin dilihat: "; 
            cin >> nodeData;                                

            Pohon *node = root; 

            // Loop untuk mencari node yang ingin dilihat berdasarkan datanya
            while (node && node->data_134 != nodeData){
                if (nodeData < node->data_134){
                    node = node->left; 
                } else{
                    node = node->right; 
                }
            }

            if (node){
                cout << "Data node: " << node->data_134 << endl;
            } else{
                // Jika node tidak ditemukan, tidak melakukan apa-apa
            }
            break;
        }

        case 6: 
        {
            char nodeData;                                 
            cout << " Input data node yang ingin dicari: ";
            cin >> nodeData;                                
            Pohon *node = root;     

            // Loop untuk mencari node yang ingin dicari berdasarkan datanya
            while (node && node->data_134 != nodeData){
                if (node->left && node->left->data_134== nodeData){
                    node = node->left; 
                }else if (node->right && node->right->data_134 == nodeData){
                    node = node->right; 
                } else if (node->left){
                    node = node->left; 
                }else if (node->right){
                    node = node->right; 
                } else{
                    node = NULL; 
                }
            }
            if (node){
                find(node);
            } else{
                cout << "\n Node tidak ditemukan!" << endl;
            }
            break; 
        }

        case 7: 
            cout << "\n Traversal PreOrder : ";
            preOrder(root); 
            break;

        case 8: 
            cout << "\n Traversal InOrder : ";
            inOrder(root); 
            break;

        case 9: // Menu untuk traversal PostOrder
            cout << "\n Traversal PostOrder : ";
            postOrder(root); 
            break;

        case 10: 
        {
            char nodeData;                                               
            cout << " Input data node yang ingin dihapus subtree-nya: "; 
            cin >> nodeData;                                            
            Pohon *node = root;   

            // Loop untuk mencari node yang ingin dihapus subtree-nya berdasarkan datanya
            while (node && node->data_134 != nodeData){
                if (node->left && node->left->data_134 == nodeData){
                    node = node->left; 
                } else if (node->right && node->right->data_134 == nodeData){
                    node = node->right; 
                } else if (node->left){
                    node = node->left; 
                } else if (node->right){
                    node = node->right; 
                } else{
                    node = NULL; 
                }
            }
            if (node){
                deleteSubtree(node);
            } else{
                cout << "\n Node tidak ditemukan!" << endl; 
            }
            break; 
        }

        case 11: 
            cout << "\n Hapus Seluruh Tree : ";
            init();                                      
            cout << "\n Tree berhasil dihapus!" << endl; 
            break;                                      

        case 12: 
            characteristic(); 
            break; 

        case 13: 
        {
            char nodeData;                                                           
            cout << " Input data node yang ingin dilihat child dan descendant-nya: "; 
            cin >> nodeData;                                                         
            Pohon *node = root;         

            // Loop untuk mencari node yang ingin dilihat child dan descendant-nya berdasarkan datanya
            while (node && node->data_134 != nodeData){
                if (node->left && node->left->data_134 == nodeData){
                    node = node->left; 
                } else if (node->right && node->right->data_134 == nodeData){
                    node = node->right;
                } else if (node->left){
                    node = node->left; 
                } else if (node->right){
                    node = node->right; 
                } else{
                    node = NULL; 
                }
            }
            if (node){
                showChildAndDescendant(node);
            } else{
                cout << "\n Node tidak ditemukan!" << endl; 
            }
            break; 
        }

        case 0:                                                               
            cout << "\n Terima kasih telah menggunakan program ini!" << endl; 
            break;                                                           

        default:                                            
            cout << "\n Pilihan menu tidak valid!" << endl; 
        }
    } while (pil != 0); 

    return 0;
}
