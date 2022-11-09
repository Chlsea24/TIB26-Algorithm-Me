#include <iostream>
using namespace std;


int tambah(int a, int b){
	int hasil1 = a+b;
	
	return hasil1;
}

int kurang (int a, int b){
	int hasil2 = a-b;
	
	return hasil2;
}

main(){
	cout<<"bring it on"<<endl;
	
	/*string dpn, blkng;
	
	cout<<"enter :";
	cin>>dpn;
	cin>>blkng;
	string ful = dpn.append(blkng);
	
	cout<<ful<<endl; */
	
	int time;
	cout<<"enter :";
	cin>>time;
	
	int c = 5;
	int v = 7;
	
	string result = (time < 18) ? (tambah(c,v)) : (kurang(c,v));
	cout << result; 
	cin.get();
}
