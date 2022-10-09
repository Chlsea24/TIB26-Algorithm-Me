#include <iostream>
#include <math.h>
using namespace std;


struct oho
{
	int jari;
};
	
main()
{
	oho a;
	int r;
	int luas;
	int phi=3;
	
	cout<<"jari-jari = ", cin>>r;
	a.jari = r;
	luas = phi*pow (a.jari,2);
	cout << "luas = "<<luas<<endl;
	
	return 0;
}
