#include <iostream>
#include <cstring>
using namespace std;

main(){
	
	//list barang
	string A="A001";
	string B="B001";
	string C="C001";
	string D="D001";
	string E="D002";
	
	int jmlh, byr, hrga, total, grand, disc;
	char nota[4];
	char kode[4];
	
	lembar: //kerja
	cout<<"[INPUT]"<<endl;
	cout<<"No. Nota\t: ", cin>>nota;
	cout<<"Kode Barang\t: ", cin>>kode;
	cout<<"Jumlah Barang\t: ", cin>>jmlh;
	cout<<"Jumlah Uang\t: ", cin>>byr;
	cout<<endl;
	
	//FAKTUR
	cout<<"[REJEKI SELALU]"<<endl;
	cout<<"No. Nota\t: "<<nota<<endl;
	cout<<"Kode Barang\t: "<<kode<<endl;
	
	cout<<"Nama Barang\t: ";
	if(kode ==A){
		cout<<"Buku"<<endl;
	} else if (kode == B) {
		cout<<"Pensil"<<endl;
	} else if (kode == C) {
		cout<<"Pulpen"<<endl;
	} else if (kode == D){
		cout<<"Penghapus"<<endl;
	} else if (kode == E){
		cout<<"Spidol"<<endl;
	} else {
		cout <<"Please input the correct code"<<endl<<endl;
		goto lembar;
	}
	
	cout<<"Harga Satuan\t: ";
	if(kode ==A){
		hrga = 10000;
		cout<<hrga<<endl;
	} else if (kode == B) {
		hrga = 2000;
		cout<<hrga<<endl;
	} else if (kode == C) {
		hrga = 5000;
		cout<<hrga<<endl;
	} else if (kode == D){
		hrga = 1000;
		cout<<hrga<<endl;
	} else if (kode == E){
		hrga = 8000;
		cout<<hrga<<endl;
	}
	
	cout<<"Jumlah Beli\t: "<<jmlh<<endl;
	cout<<"Total Harga\t: ";
	total = jmlh*hrga;
	cout<<total<<endl;
	
	cout<<"Bayar\t\t: "<<byr<<endl;
	if (byr<total){
		cout <<"Maaf, uang anda kurang."<<endl<<endl;
		goto lembar;
	}
	
	cout<<"Diskon\t\t: ";
	if (total >= 500000){
		cout<<"10% ";
		disc = total*10/100;
		cout<<"( "<<disc<<" )"<<endl;
	} else if (total >= 50000){
		cout<<"5 ";
		disc = total*5/100;
		cout<<"( "<<disc<<" )"<<endl;
	} else {
		cout << "0%" <<endl;
	}
	
	cout<<"PPN\t: ";
	
	
	
}
