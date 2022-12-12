#include <iostream>
#include <cstring>
using namespace std;

struct data{
	int nim;
	string nama;
	int uts, uas, tm;
};

main(){
	struct data mahasiswa[2];
	mahasiswa[0].nim = 35120010;
	mahasiswa[0].nama = "Agus";
	mahasiswa[0].uts = 100;
	mahasiswa[0].uas = 20;
	mahasiswa[0].tm = 100;
	
	mahasiswa[1].nim = 32190020;
	mahasiswa[1].nama = "Budi";
	mahasiswa[1].uts = 90;
	mahasiswa[1].uas = 80;
	mahasiswa[1].tm = 80;
	
	cout<<"=================================================="<<endl;
	cout<<"NIM \t\tNama \tUTS \tUAS \tTM"<<endl;
	for(int i=0; i<2; i++){
		cout<<mahasiswa[i].nim<<"\t";
		cout<<mahasiswa[i].nama<<"\t";
		cout<<mahasiswa[i].uts<<"\t";
		cout<<mahasiswa[i].uas<<"\t";
		cout<<mahasiswa[i].tm<<endl;
	}
	cout<<"=================================================="<<endl;
}
