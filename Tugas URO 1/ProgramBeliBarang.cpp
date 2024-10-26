#include <iostream>
using namespace std;

int main(){
    int pil;
    int totalharga=0;
    int jumlahbarang;
    int hargabarang=0;
    string x;
    int diskon;
    int total;
    
    do {
    
    cout << "============================================\n";
    cout << "     SELAMAT DATANG DI SUPERMARKET MINI  \n";
    cout << "============================================\n";
    cout << endl;
    cout << "---Produk yang tersedia---\n";
    cout << "1. Telur ayam Fiesta\n";
    cout << "2. Susu UHT coklat\n";
    cout << "3. Aqua 600mL\n";
    cout << "4. Oreo\n";
    cout << "5. Magnum Classic\n";
    cout << "6. Teh botol Sosro 350mL\n";
    cout << endl;
    cout << "Diskon 10% untuk pembelian minimum Rp 100.000\n";
    cout << endl;
    cout << "Produk yang ingin Anda beli : ";
    cin >> pil;
    cout << "-------------------------------\n";
    switch(pil)
    
    {
    case 1:
    cout << "-Harga Rp 30.000-";
    hargabarang = 30000;
    break;
    case 2:
    cout << "-Harga Rp 5.000-";
    hargabarang = 5000;
    break;
    case 3:
    cout << "-Harga Rp 3.000-";
    hargabarang = 3000;
    break;
    case 4:
    cout << "-Harga Rp 10.000-";
    hargabarang = 10000;
    break;
    case 5:
    cout << "-Harga Rp 16.000-";
    hargabarang = 16000;
    break;
    case 6:
    cout << "-Harga Rp 6.000-";
    hargabarang = 6000;
    cout << endl;
    break;
    }
    cout << endl;
    cout << endl;
    cout << "Berapa banyak yang ingin Anda beli : ";
    cin >> jumlahbarang;
    cout << endl;
    total = jumlahbarang*hargabarang;
    totalharga = totalharga + total;
    cout << "Apakah Anda ingin membeli yang lain (y/n) : ";
    cin >> x;
    cout << "-------------------------------\n";
    
    
    if(x=="y"){
        system("clear");
    }
    if (x=="n"){
    cout << "Total Harga: ";
    cout << totalharga;
    cout << endl;
    if (totalharga>=100000){
        diskon = 0.1*totalharga;
        cout << "Diskon : ";
        cout << diskon;
        cout << endl;
        cout << "\n===================================\n";
        totalharga = totalharga-diskon;
        cout << "Total harga setelah diskon : ";
        cout << totalharga;
        pil=0;
    }
    else {
        cout << "Diskon : 0\n";
        cout << "\n===================================\n";
        cout << "Total harga setelah diskon : ";
        cout << totalharga;
        pil=0;
    }
    
    }
    
    }
    while(pil!=0);
    return 0;
}


