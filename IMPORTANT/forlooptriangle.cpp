#include <iostream>
using namespace std;

int main(){
	
	cout<<"===Membuat Segitiga Bintang==="<<endl;
	int i, j, uk;
	
	cout<<"Ukuran : ", cin>>uk;
	
	for (i=1; i<=uk; i++){
		for (j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<" "<<endl;
	}
	
	cout<<"\n\niso?\n\n"<<endl;
	
	for (i=uk; i>=1; i--){
		for (j=1; j<=i; j++){
			if (uk==5){
				cout <<"x";
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	
	for (i=1; i<=uk; i++){
		for (j=1; j<=uk; j++){
			cout<<"* ";
		}
		cout<<" "<<endl;
	}
	cout<<"\nhm."<<endl;
	return 0;
}
