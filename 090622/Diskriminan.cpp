#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	cout<<"====START====\n";
	cout<<"Menentukan jenis akar dari persamaan\n";

	int a, b, c, D;
	cout<<"Nilai a = ", cin>>a;
	cout<<"Nilai b = ", cin>>b;
	cout<<"Nilai c = ", cin>>c;

	D = pow(b,2)-4*a*c;
	cout<<"Diskriminan = " << D << "\n";
	
	if (D>0) {
		cout<<"Jenis akarnya adalah REAL";
	}
	else if (D<0) {
		cout<<"Jenis akarnya adalah IMAJINER";
	}
	else {
		cout<<"Jenis akarnya adalah KEMBAR";
	}
	return 0;
}