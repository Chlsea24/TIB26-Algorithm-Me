#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool sm(string a, string b){
	if (a[0]!=b[0]){
		return false;
	} else {
		return true;
	}
}

int main(){
	
	string nama1a = "Acong";
	string nama2a = "Acong";
	
	string nama1b = "Budi";
	string nama2b = "Buditingkir";
	
	string nama1c = "SalamSejahtera";
	string nama2c = "Salamsejahtera";
	
	sm(nama1a, nama2a);
	sm(nama1b, nama2b);
	sm(nama1c, nama2c);
	
	cout<<"========================================="<<endl;
	cout<<"Nama 1 \t\tNama 2 \t\tHasil Banding"<<endl;
	cout<<nama1a<<"\t\t"<<nama2a<<"\t\t";
	if( sm(nama1a, nama2a) == true)
	cout << "True";
	if( sm(nama1a, nama2a) != true)
	cout << "False";
	
	cout<<endl;
	
	cout<<nama1b<<"\t\t"<<nama2b<<"\t";
	if( sm(nama1b, nama2b) == true)
	cout << "True";
	if( sm(nama1b, nama2b) != true)
	cout << "False";
	
	cout<<endl;
	
	cout<<nama1c<<"\t"<<nama2c<<"\t";
	if( sm(nama1c, nama2c) == true)
	cout << "True";
	if( sm(nama1c, nama2c) != true)
	cout << "False";
	
	return 0;
}

