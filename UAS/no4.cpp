#include <iostream>
#include <cmath>
using namespace std;

int Deret(int a){
    int hasil = pow(2,a);
    return hasil;
}
main(){
	int n;
	cout<<"Masukkan jumlah deret : ";
	cin>>n;
	
	for (int i=0; i<=n; i++){
		if(i == 1){
			cout<<i+1<< " ";
		} else {
            cout<<Deret(i)<<" ";
		}
	}
}
