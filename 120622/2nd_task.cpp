#include <iostream>
using namespace std;

main(){
	int tangga;
	
	cout<<"Masukkan jumlah tangga : ";
	cin>>tangga;
	
	for(int i=0; i<=tangga; i++){
		for(int j=0; j<i; j++){
			cout<< j+1 << " ";
		}
		cout<<endl;
	}
}
