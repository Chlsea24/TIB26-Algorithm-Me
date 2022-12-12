#include <iostream>
using namespace std;

int main() {
	
	int sawal, bunga1, bunga2, sakhir, adm;
	
	cout<<"Masukkan saldo awal : ";
	cin>>sawal;
	
	cout<<"Persen bunga 1 : ";
	cin>>bunga1;
	
	cout<<"Persen bunga 2 : ";
	cin>>bunga2;
	
	cout<<"Biaya admin : ";
	cin>>adm;
	
	if (sawal < 10000000) {
		sakhir = sawal+(sawal*bunga1/100)-adm;
	} else {
		sakhir = sawal+(sawal*bunga2/100);
	}
	
	cout<<"Sisa saldo bulan 1 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal+(sawal*bunga1/100)-adm;
	} else {
		sakhir = sawal+(sawal*bunga2/100);
	}
	
	cout<<"Sisa saldo bulan 2 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal+(sawal*bunga1/100)-adm;
	} else {
		sakhir = sawal+(sawal*bunga2/100);
	}
	
	cout<<"Sisa saldo bulan 3 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal+(sawal*bunga1/100)-adm;
	} else {
		sakhir = sawal+(sawal*bunga2/100);
	}
	
	cout<<"Sisa saldo bulan 4 : "<<sakhir<<endl;
	
	sawal = sakhir;
	if (sawal < 10000000) {
		sakhir = sawal+(sawal*bunga1/100)-adm;
	} else {
		sakhir = sawal+(sawal*bunga2/100);
	}
	
	cout<<"Sisa saldo bulan 5 : "<<sakhir<<endl;
	
	
}
