#include <iostream>
using namespace std;

struct bank{
	int sawal;
	float bunga;
	float bunga1;
	float bunga2;
	int sakhir;
};

int persen1 (int a){
	float bunga1 = 0.1*a;
	
	return bunga1;
}

int persen2 (int a){
	float bunga2 = 0.05*a;
	
	return bunga2;
}

int main(){
	int adm=5000;
	
	// [BULAN 1]
	bank bulan1;
	cout<<"Masukkan saldo awal : ";
	cin>>bulan1.sawal;
	
	bulan1.bunga1=persen1(bulan1.sawal);
	bulan1.bunga2=persen2(bulan1.sawal);
	cout<<"\nmaka, bunga1 = "<<bulan1.bunga1<<endl;
	cout<<"bunga2 = "<<bulan1.bunga2<<endl;
	
	if (bulan1.sawal < 10000000){
		bulan1.bunga = bulan1.bunga1;
		cout <<"Bunga : "<<bulan1.bunga<<endl;
	} else {
		bulan1.bunga = bulan1.bunga2;
		cout <<"Bunga : "<<bulan1.bunga<<endl;
	}
	
	if (bulan1.sawal < 10000000){
		bulan1.sakhir = bulan1.sawal - adm;
		cout<<"Sisa : "<<bulan1.sakhir<<endl;
		/* bulan1.sawal = bulan1.sakhir;
		
		if (bulan1.sakhir < 10000000){
			bulan1.sakhir = (bulan1.sawal+bulan1.bunga1)*(bulan1.sawal-adm);
		} else {
			bulan1.sakhir = (bulan1.sawal+bulan1.bunga2)*bulan1.sawal;
		} */
	}
	
	// [BULAN 2]
	bank bulan2;
	bulan2.sawal = bulan1.sakhir;
	
	bulan2.bunga1=persen1(bulan2.sawal);
	bulan2.bunga2=persen2(bulan2.sawal);
	cout<<"\nmaka, bunga1 = "<<bulan2.bunga1<<endl;
	cout<<"bunga2 = "<<bulan2.bunga2<<endl;
	
	if (bulan2.sawal < 10000000){
		bulan2.bunga = bulan2.bunga1;
		cout <<"Bunga : "<<bulan2.bunga<<endl;
	} else {
		bulan2.bunga = bulan2.bunga2;
		cout <<"Bunga : "<<bulan2.bunga<<endl;
	}
	
	if (bulan2.sawal < 10000000){
		bulan2.sakhir = bulan2.sawal - adm;
		cout<<"Sisa : "<<bulan2.sakhir<<endl;
		/* bulan2.sawal = bulan2.sakhir;
		
		if (bulan2.sakhir < 10000000){
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga1)*(bulan2.sawal-adm);
		} else {
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga2)*bulan2.sawal;
		} */
	}
	
	// [BULAN 3]
	bank bulan3;
	bulan3.sawal = bulan2.sakhir;
	
	bulan3.bunga1=persen1(bulan3.sawal);
	bulan3.bunga2=persen2(bulan3.sawal);
	cout<<"\nmaka, bunga1 = "<<bulan3.bunga1<<endl;
	cout<<"bunga2 = "<<bulan3.bunga2<<endl;
	
	if (bulan3.sawal < 10000000){
		bulan3.bunga = bulan3.bunga1;
		cout <<"Bunga : "<<bulan3.bunga<<endl;
	} else {
		bulan3.bunga = bulan3.bunga2;
		cout <<"Bunga : "<<bulan3.bunga<<endl;
	}
	
	if (bulan3.sawal < 10000000){
		bulan3.sakhir = bulan3.sawal - adm;
		cout<<"Sisa : "<<bulan3.sakhir<<endl;
		/* bulan3.sawal = bulan3.sakhir;
		
		if (bulan2.sakhir < 10000000){
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga1)*(bulan2.sawal-adm);
		} else {
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga2)*bulan2.sawal;
		} */
	}
	
	// [BULAN 4]
	bank bulan4;
	bulan4.sawal = bulan3.sakhir;
	
	bulan4.bunga1=persen1(bulan4.sawal);
	bulan4.bunga2=persen2(bulan4.sawal);
	cout<<"\nmaka, bunga1 = "<<bulan4.bunga1<<endl;
	cout<<"bunga2 = "<<bulan4.bunga2<<endl;
	
	if (bulan4.sawal < 10000000){
		bulan4.bunga = bulan4.bunga1;
		cout <<"Bunga : "<<bulan4.bunga<<endl;
	} else {
		bulan4.bunga = bulan4.bunga2;
		cout <<"Bunga : "<<bulan4.bunga<<endl;
	}
	
	if (bulan4.sawal < 10000000){
		bulan4.sakhir = bulan4.sawal - adm;
		cout<<"Sisa : "<<bulan4.sakhir<<endl;
		/* bulan2.sawal = bulan2.sakhir;
		
		if (bulan2.sakhir < 10000000){
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga1)*(bulan2.sawal-adm);
		} else {
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga2)*bulan2.sawal;
		} */
	}
	
	// [BULAN 5]
	bank bulan5;
	bulan5.sawal = bulan4.sakhir;
	
	bulan5.bunga1=persen1(bulan5.sawal);
	bulan5.bunga2=persen2(bulan5.sawal);
	cout<<"\nmaka, bunga1 = "<<bulan5.bunga1<<endl;
	cout<<"bunga2 = "<<bulan5.bunga2<<endl;
	
	if (bulan5.sawal < 10000000){
		bulan5.bunga = bulan5.bunga1;
		cout <<"Bunga : "<<bulan5.bunga<<endl;
	} else {
		bulan5.bunga = bulan5.bunga2;
		cout <<"Bunga : "<<bulan5.bunga<<endl;
	}
	
	if (bulan4.sawal < 10000000){
		bulan5.sakhir = bulan5.sawal - adm;
		cout<<"Sisa : "<<bulan5.sakhir<<endl;
		/* bulan2.sawal = bulan2.sakhir;
		
		if (bulan2.sakhir < 10000000){
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga1)*(bulan2.sawal-adm);
		} else {
			bulan2.sakhir = (bulan2.sawal+bulan2.bunga2)*bulan2.sawal;
		} */
	}
	cout<<"=========================="<<endl;
	cout<<"Saldo akhir bulan ke-1 : "<<bulan1.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-2 : "<<bulan2.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-3 : "<<bulan3.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-4 : "<<bulan4.sakhir<<endl;
	cout<<"Saldo akhir bulan ke-5 : "<<bulan5.sakhir<<endl;
}
