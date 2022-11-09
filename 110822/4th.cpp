#include <iostream>
using namespace std;

int main(){
	
	int sawal, bunga, sakhir, adm;
	
	cout<<"Masukkan nominal awal : ";
	cin>>sawal;
	
	cout<<"Masukkan persen bunga yang diinginkan : ";
	cin>>bunga;
	
	cout<<"Masukkan biaya admin yang diinginkan : ";
	cin>>adm;
	
	bunga=sawal*bunga/100;
	
	if (sawal < 10000000){
		sakhir = sawal+bunga-adm;
	} else {
		sakhir = sawal+bunga;
	}
	cout<<"Sisa saldo bulan 1 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000){
		sakhir = sawal+bunga-adm;
	} else {
		sakhir = sawal+bunga;
	}
	cout<<"Sisa saldo bulan 2 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000){
		sakhir = sawal+bunga-adm;
	} else {
		sakhir = sawal+bunga;
	}
	cout<<"Sisa saldo bulan 3 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000){
		sakhir = sawal+bunga-adm;
	} else {
		sakhir = sawal+bunga;
	}
	cout<<"Sisa saldo bulan 4 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000){
		sakhir = sawal+bunga-adm;
	} else {
		sakhir = sawal+bunga;
	}
	cout<<"Sisa saldo bulan 5 : "<<sakhir<<endl;
	
	return 0;
}
