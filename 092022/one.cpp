/* Buat program berisi proses berikut ini :
 << itu operasi bitwise
*/

#include <iostream>
using namespace std;

int main(){
	
	int a;
	cout<<"Nilai a = ", cin>>a;
	cout<<a;
	
	a=a<<5;
	cout<<a<<endl;
	
	a=a>>3;
	cout<<a<<endl;
	
	//a=a>>1;
	//cout<<a;
	
	return 0;
}
