/* Membuat flowchart & program sederhana dari
	X = 10 , Y = 20
	X = X - Y*Z
	Z = X+Y / X
	X > 0 , X = X++
	Z < 0 , Z = Z--
	
	X,Y,Z ?
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout<<"Chelsea Effendi / 32220030 \n" <<endl;
	int X=10, Y=20, Z=0, z=0;
	cout<<"\nDiketahui : X = 10 , Y = 20" << endl;
	cout<<"X = X - Y*Z"<< endl;
	cout<<"Z = X+Y / X"<< endl;
	
	cout<<"Jika X>0, maka X=X++" << endl;
	cout<<"Jika Z<0, maka Z=Z--" << endl;
	
	cout<<"Ditanya : X, Y, Z?" << endl;
	cout<<"Jawab :\n" << endl;
	
	cout<<"===X===\n";
	X = X - Y*Z;
	cout<<"X = X - Y*Z\n";
	cout<<"X = " << X << "-" << Y << "*" << Z;
	cout<<"\nX = " << X << endl;
	if (X>0) {
		X++;
		cout<<"\n Karena X>0, maka nilai X = " << X << endl;
	} else {
		cout<<"\n Nilai X = " << X << endl;
	}
	
	cout<<"\n===Y===\n";
	Y = Y;
	cout<<"Y = " << Y;
	cout<<"\nNilai Y = " << Y <<endl;
	
	cout<<"\n===Z===\n";
	z = X+Y;
	Z = z / X;
	cout<<"Z = X+Y / X\n";
	cout<<"Z = " << X << "+" << Y << "/" << X << endl;
	cout<<"Nilai Z = " << Z <<endl;
	if (Z<0) {
		Z--;
		cout<<"\n Karena Z<0, maka nilai Z = " << Z << endl;
	} else {
		cout<<"\n Karena nilai Z > 0, maka nilai Z tetap, Z = " << Z << endl;
	}
	cout<<"(sebenarnya 2.909~, namun karena kita memakai integer, maka terjadi pembulatan ke bawah.)" << endl;
	
	return 0;
	
}