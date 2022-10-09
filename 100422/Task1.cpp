#include <iostream>
using namespace std;

main(){
	
	cout<<"==Balok=="<<endl;
	
	int p, l, t, lp, v;
	cout<<"panjang : ", cin>>p;
	cout<<"lebar : ", cin>>l;
	cout<<"tinggi : ", cin>>t;
	
	//Luas Permukaan
	lp = 2*(p*l + p*t + l*t);
	
	//Volume
	v = p*l*t;
	
	cout<<"Luas Permukaan = "<< lp << endl;
	cout<<"Volume = "<< v << endl;
	
}
