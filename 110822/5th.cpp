#include <iostream>
using namespace std;

main(){
	
	int sawal, bunga1, bunga2, bunga3, adm, zakat, sakhir, Y;
	
	cout<<"Masukkan nominal awal : ";
	cin>>sawal;
	
	cout<<"Masukkan persen bunga1 yang diinginkan : ";
	cin>>bunga1;
	bunga1=sawal*bunga1/100;
	
	cout<<"Masukkan persen bunga2 yang diinginkan : ";
	cin>>bunga2;
	bunga2=sawal*bunga2/100;
	
	cout<<"Masukkan persen bunga3 yang diinginkan : ";
	cin>>bunga3;
	bunga3=sawal*bunga3/100;
	
	cout<<"Masukkan biaya admin yang diinginkan : ";
	cin>>adm;
	
	cout<<"==============="<<endl;
	
	if (sawal < 10000000) {
		sakhir = sawal + bunga1 - adm;
	} else if (sawal < 50000000){
		sakhir = sawal + bunga2;
	} else if (sawal<100000000){
		zakat = sawal - (sawal/2);
		cout<<"Zakat : "<<zakat<<endl;
		sakhir = sawal + bunga3 - zakat;
	} else {
		zakat = sawal - (sawal/2);
		sakhir = sawal - zakat;
	}
	cout<<"Saldo bulan 1 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal + bunga1 - adm;
	} else if (sawal < 50000000){
		sakhir = sawal + bunga2;
	} else if (sawal<100000000){
		zakat = sawal - (sawal/2);
		cout<<"Zakat : "<<zakat<<endl;
		sakhir = sawal + bunga3 - zakat;
	} else {
		zakat = sawal - (sawal/2);
		sakhir = sawal - zakat;
	}
	cout<<"Saldo bulan 2 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal + bunga1 - adm;
	} else if (sawal < 50000000){
		sakhir = sawal + bunga2;
	} else if (sawal<100000000){
		zakat = sawal - (sawal/2);
		cout<<"Zakat : "<<zakat<<endl;
		sakhir = sawal + bunga3 - zakat;
	} else {
		zakat = sawal - (sawal/2);
		sakhir = sawal - zakat;
	}
	cout<<"Saldo bulan 3 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal + bunga1 - adm;
	} else if (sawal < 50000000){
		sakhir = sawal + bunga2;
	} else if (sawal<100000000){
		zakat = sawal - (sawal/2);
		cout<<"Zakat : "<<zakat<<endl;
		sakhir = sawal + bunga3 - zakat;
	} else {
		zakat = sawal - (sawal/2);
		sakhir = sawal - zakat;
	}
	cout<<"Saldo bulan 4 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal + bunga1 - adm;
	} else if (sawal < 50000000){
		sakhir = sawal + bunga2;
	} else if (sawal<100000000){
		zakat = sawal - (sawal/2);
		cout<<"Zakat : "<<zakat<<endl;
		sakhir = sawal + bunga3 - zakat;
	} else {
		zakat = sawal - (sawal/2);
		sakhir = sawal - zakat;
	}
	cout<<"Saldo bulan 5 : "<<sakhir<<endl;
	
	cout<<"Udah?";
	cin>>Y;
}
