#include <iostream>
using namespace std;

int main() {
    int hargaBarang, diskon, jumlahDiskon, hargaSetelahDiskon;

    cout << "Selamat Datang di Toko Unisba Blitar" << endl;
    cout << "=====================================" << endl;

        cout << endl;

    cout << "Silahkan masukkan    :" << endl;
    cout << "Harga barang (Rp)    = ";
    cin >> hargaBarang;

    cout << "Masukkan diskon (%)  = ";
    cin >> diskon;

   
    jumlahDiskon = hargaBarang * diskon / 100;
    
    hargaSetelahDiskon = hargaBarang - jumlahDiskon;

    cout << endl;
    
    cout << "Hasil: " << endl;
    cout << "Jumlah diskon        : " << jumlahDiskon << endl;
    cout << "Harga setelah diskon : " << hargaSetelahDiskon << endl;

    return 0;

}

