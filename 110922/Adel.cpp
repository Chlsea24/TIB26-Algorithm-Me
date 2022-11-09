#include <iostream>
#include <string.h>
using namespace std;

struct nota
{
	char kodebarang[5];
	char namabarang[20];
	int harga;
};

int main()
{
	string kode;
	int nonota;
	int jumlahbeli;
	int bayar;
	int totalharga;
	int diskon;
	
	nota data[5];
	
	char x[5] = "A001";
	char X[20] = "Buku";
	strcpy(data[0].kodebarang,x);
	strcpy (data[0].namabarang,X);
	data[0].harga = 10000;
	
	char y[5] = "B001";
	char Y[20] = "Pensil";
	strcpy(data[1].kodebarang,y);
	strcpy(data[1].namabarang,Y);
	data[1].harga=2000;
	
	char z[5] = "C001";
	char Z[20] = "Pulpen";
	strcpy(data[2].kodebarang,z);
	strcpy(data[2].namabarang,Z);
	data[2].harga=5000;
	
	char a[5] = "D001";
	char A[20] = "Penghapus";
	strcpy(data[3].kodebarang,a);
	strcpy(data[3].namabarang,A);
	data[3].harga=1000;
	
	char b[5] = "E001";
	char B[20] = "Spidol";
	strcpy(data[4].kodebarang,b);
	strcpy(data[4].namabarang,B);
	data[4].harga=8000;

	h:
    cout<<"Kode barang : ";cin>>kode;
	cout<<"Jumlah beli : ";cin>>jumlahbeli;
	if(kode == data[0].kodebarang)
	{
		cout<<"Nama barang : "<<data[0].namabarang<<endl;
		cout<<"Harga satuan : "<<data[0].harga<<endl;
		totalharga = jumlahbeli*data[0].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
    else if(kode == data[1].kodebarang)
	{
		cout<<"Nama barang : "<<data[1].namabarang<<endl;
		cout<<"Harga satuan : "<<data[1].harga<<endl;
		totalharga = jumlahbeli*data[1].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode == data[2].kodebarang)
	{
		cout<<"Nama barang : "<<data[2].namabarang<<endl;
		cout<<"Harga satuan : "<<data[2].harga<<endl;
		totalharga = jumlahbeli*data[2].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode == data[3].kodebarang)
	{
		cout<<"Nama barang : "<<data[3].namabarang<<endl;
		cout<<"Harga satuan : "<<data[3].harga<<endl;
		totalharga = jumlahbeli*data[3].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode == data[4].kodebarang)
	{
		cout<<"Nama barang : "<<data[4].namabarang<<endl;
		cout<<"Harga satuan : "<<data[4].harga<<endl;
		totalharga = jumlahbeli*data[4].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else
	{
	    cout<<"Kode barang yang Anda masukkan tidak valid."<<endl;
	    cout<<"Silakan input ulang kode barang."<<endl;
	    goto h;
	}
}