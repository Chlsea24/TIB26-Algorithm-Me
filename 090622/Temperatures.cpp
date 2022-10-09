#include <iostream>
using namespace std;

int main ()
{
	cout<<"====KONVERSI SUHU====\n";

	int c, f, r, K;
	cout<<"Celsius = ", cin>>c;
	cout<<"Maka :\n";
	cout<<"Farenheit = "<<(9*c/5+32)<<"'F\n";
	cout<<"Reamur = "<<(4*c/5)<<"'R\n";
	cout<<"Kelvin = "<<(c+273)<<"K\n";

	return 0;
}