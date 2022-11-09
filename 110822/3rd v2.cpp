#include <iostream>
using namespace std;

struct bank{
	int sawal;
	int sakhir;
};

int main(){
	int adm=5000;
	float bunga1 = 10/100;
	float bunga2 = 5/100;
	
	// [BULAN 1]
	bank bulan1;
	cout<<"Masukkan saldo awal : ";
	cin>>bulan1.sawal;
	
	if (bulan1.sawal < 10000000){
		bulan1.sakhir = bulan1.sawal+(bulan1.sawal*bunga1)-adm;
	}else {
		bulan1.sakhir = bulan1.sawal+(bulan1.sawal*bunga2);
	}
	cout<<"Sisa : "<<bulan1.sakhir<<endl;
	
	// [BULAN 2]
	bank bulan2;
	bulan2.sawal = bulan1.sakhir;
	
	if (bulan2.sawal < 10000000){
		bulan2.sakhir = bulan2.sawal+(bulan2.sawal*bunga1)-adm;
	}else {
		bulan2.sakhir = bulan2.sawal+(bulan2.sawal*bunga2);
	}
	cout<<"Sisa : "<<bulan2.sakhir<<endl;
	
	// [BULAN 3]
	bank bulan3;
	bulan3.sawal = bulan2.sakhir;
	
	if (bulan3.sawal < 10000000){
		bulan3.sakhir = bulan3.sawal+(bulan3.sawal*bunga1)-adm;
	}else {
		bulan3.sakhir = bulan3.sawal+(bulan3.sawal*bunga2);
	}
	cout<<"Sisa : "<<bulan3.sakhir<<endl;
	
	// [BULAN 4]
	bank bulan4;
	bulan4.sawal = bulan3.sakhir;
	
	if (bulan4.sawal < 10000000){
		bulan4.sakhir = bulan4.sawal+(bulan4.sawal*bunga1)-adm;
	}else {
		bulan4.sakhir = bulan4.sawal+(bulan4.sawal*bunga2);
	}
	cout<<"Sisa : "<<bulan4.sakhir<<endl;
	
	// [BULAN 5]
	bank bulan5;
	bulan5.sawal = bulan4.sakhir;
	
	if (bulan5.sawal < 10000000){
		bulan5.sakhir = bulan5.sawal+(bulan5.sawal*bunga1)-adm;
	}else {
		bulan5.sakhir = bulan5.sawal+(bulan5.sawal*bunga2);
	}
	cout<<"Sisa : "<<bulan5.sakhir<<endl;
	
	cout<<"=========================="<<endl;
	cout<<"Saldo akhir bulan ke-1 : "<<bulan1.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-2 : "<<bulan2.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-3 : "<<bulan3.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-4 : "<<bulan4.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-5 : "<<bulan5.sakhir<<endl;
	
}
