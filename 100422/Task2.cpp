#include <iostream>
using namespace std;

struct item{
    int jumlah;
    char kodebarang[4];
    char namabarang[10];
}; 
		
int main(){
 	
 	struct item pensil;
    pensil.jumlah = 2;
    pensil.namabarang = "pensil";
    pensil.kodebarang = "B001";
    
    struct item buku;
    buku.jumlah = 5;
    buku.namabarang = "Buku";
    buku.kodebarang = "B002";
	
	struct item penggaris;
	penggaris.jumlah = 10;
	penggaris.namabarang = "penggaris";
	penggaris.kodebarang = "B003";
	
	cout<<"========================================="<<endl;
	cout<<"|| Kode barang || Nama barang || Jumlah||"<<endl;
	cout<<"||"<<pensil.kodebarang<<"||"<<pensil.namabarang<<"||"<<pensil.jumlah<<"||"<<endl;
	cout<<"||"<<buku.kodebarang<<"||"<<buku.namabarang<<"||"<<buku.jumlah<<"||"<<endl;
	cout<<"||"<<penggaris.kodebarang<<"||"<<penggaris.namabarang<<"||"<<penggaris.jumlah<<"||"<<endl;

	
	return 0;
}


