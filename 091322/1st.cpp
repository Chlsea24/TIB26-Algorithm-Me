/* buat algoritma (flowchart) & program sdrhn utk mnghitung
	X=10, Y=20
	Z = X + Y*X
	Y = (X^2) + (2*Y)
	X = X^2%Y
	nilai X, Y Z?
*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
	cout<<"Chelsea Effendi / 32220030\n";
	int x=0, X=0, Y=0, Z=0;

	X = 10;
	Y = 20;
	cout<<"\nDiketahui : X="<< X << " dan Y=" << Y << endl;
	cout<<"Ditanya : x, y, Z?\n" << endl;
	
	cout<<"===Z==="<<endl;
	Z = X + Y*X;
	cout<<"Z = X + Y*X" << endl;
	cout<<"Z = " << X << "+" << Y << "*" << X << endl;
	cout<<"Nilai Z = " << Z << endl;
	
	cout<<"\n===Y==="<<endl;
	Y = pow(X,2) + (2*Y);
	cout<<"Y = (X^2) + (2*Y)" << endl;
	cout<<"Y = (10^2) + (2*20)" << endl;
	cout<<"Y = " << pow(X,2) << "+(" << 2 << "*20" << ")" << endl;
	cout<<"Nilai Y = " << Y << endl;
	
	cout<<"\n===x==="<<endl;
	x = pow(X,2);
	x = x%Y;
	cout<<"X = (X^2)%Y" << endl;
	cout<<"X = (10^2)%140" << endl;
	cout <<"Nilai X = " << x;
	
	return 0;
	
}