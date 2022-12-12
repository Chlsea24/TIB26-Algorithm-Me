#include <iostream>
using namespace std;

int main(){
	//declare
	int sawal, bunga1, bunga2, adm, sakhir;
	int s1, s2, s3, s4, s5;
	
	cout<<"Saldo awal : ";
	cin>>sawal;
	
	bunga1 = sawal/10;
	bunga2 = sawal/20;
	adm = 30000;
	cout<<"\nMaka, bunga1 = "<<bunga1<<endl;
	cout<<"Maka, bunga2 = "<<bunga2<<endl;
	cout<<"Biaya admin = "<<adm<<endl;
	
	//start
	if (sawal < 10000000){
		sakhir = sawal-adm;
		cout <<"Saldo akhir: "<<sakhir<<endl;
	} else {
		sakhir = sawal;
		cout <<"Saldo akhir: "<<sakhir<<endl;
    }    
    return 0;
}
