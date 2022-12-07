/* 
	input di main
	procedure (+) & (-)
	function (*) & (/)
*/
#include<iostream>
using namespace std;

void tambah(int a, int b){
	int re = a+b;
	cout<<"Pertambahan = "<<re<<endl;
}

void kurang(int a, int b){
	int su = a-b;
	cout<<"Pengurangan = "<<su<<endl;
}

int kali(int a, int b){
	int lt = a*b;
	return lt;
}

int bagi(int a, int b){
	return a/b;
}

main(){
	int c,d;
	cout<<"input c = ", cin>>c;
	cout<<"input d = ", cin>>d;
	tambah(c,d);
	kurang(c,d);
	cout<<kali(c,d)<<endl;
	cout<<bagi(c,d)<<endl;
	cout<<"end.";
	
}
