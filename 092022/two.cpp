// program menghitung pangkat
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int a, b, c;
	char i, Y, N;
	cout<<"Masukkan a : ", cin>>a;
	cout<<"Mau dipangkatkan berapa? ", cin>>b;
	
	c=pow(a,b);
	cout<<"Hasil " << a << "^" << b << " adalah " << c <<endl <<endl;
	
	cout<<"mau dibalik? (Y/N)"<<endl;
	cin>>i;
	
	switch (i) {
		case 'Y':
			c=pow(b,a);
			cout<<"Hasil " << b << "^" << a << " adalah " << c <<endl <<endl;
			break;
		case 'N':
			cout << "oke." <<endl;
			break;
		default :
			cout <<"apasih"<<endl;
			break;
	}
	
	return 0;
}
