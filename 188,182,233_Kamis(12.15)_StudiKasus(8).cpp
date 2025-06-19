#include <iostream>
#include <iomanip>
using namespace std;

class Penjual {
public:
    void utama();
private:
    int hari;
    int produk;
};

void Penjual::utama() {
    cout<<"========================================\n";
    cout<<"|           TOKO APA AJAHH              |\n";
    cout<<"========================================\n";

    cout<<"Masukkan jumlah maksimum hari : ";
    cin>>hari;
    cout<<"Masukkan jumlah maksimum produk : ";
    cin>>produk;

    string nama_produk[produk];
    int jualan[hari][produk];
    int totalProduk[produk] = {0}; 
    int totalSemua = 0;           

    for (int i = 0; i < produk; i++) {
        cout<<"Masukkan nama produk ke-" << i + 1 << " : ";
        cin>> nama_produk[i];
    }

    for (int i = 0; i < hari; i++) {
        cout<<"\nMasukkan penjualan untuk hari ke-" << i + 1 << endl;
        for (int j = 0; j < produk; j++) {
            cout<<"Jumlah penjualan " << nama_produk[j] << " : ";
            cin>>jualan[i][j];
            totalProduk[j] += jualan[i][j];   
            totalSemua += jualan[i][j];        
        }
    }

    cout << "\n========================================\n";
    cout << "|           DATA PAK ANDI              |\n";
    cout << "========================================\n";

 
    cout<<setw(6)<<"Hari"<<" | ";
    for (int i = 0; i<produk; i++){
        cout<<setw(12)<<nama_produk[i]<<" | ";
    }
    cout<<endl;

    cout<<"----------------------------------------------\n"

    for (int i = 0; i < hari; i++) {
        cout << setw(6) <<"hari "<<i + 1 << " | ";
        for (int j = 0; j < produk; j++) {
            cout << setw(12) << jualan[i][j] << " | ";
        }
        cout<<endl;
    }

    cout<<"========================================================\n";
    cout<<endl;

    cout<<"\nTotal keseluruhan selama "<<hari<<" hari: "<<totalSemua<<endl;
}

int main() {
    Penjual x;
    x.utama();
}

