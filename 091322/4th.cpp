/* Membuat algoritma (flowchart) dan program sederhana dari
Input : angka
Output : genap / ganjil
*/

#include <iostream>
using namespace std;

int main() {
	
	int angka;
	cout<<"Chelsea Effendi / 32220030" << endl;
	
	cout<<"\n Masukkan bilangan yang diinginkan : ";
	cin>>angka;
	
	if (angka%2==0) {
		cout<< angka << " adalah bilangan genap.";
	} else {
		cout << angka << " adalah bilangan ganjil.";
	}
	
	return 0;
}