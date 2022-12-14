#include <iostream>
#include <cmath>
using namespace std;

main(){
	int n;
	cout<<"Masukkan jumlah deret : ";
	cin>>n;
	
	for (int i=1; i<=n; i++){
		if(i == 1){
			cout<<i<< " ";
		} else {
			int h = pow(2,i);
			cout<<h<< " ";
		}
	}
}
