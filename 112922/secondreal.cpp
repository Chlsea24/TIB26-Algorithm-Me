// jadi, bnr2 inputan...

#include<iostream>
#include <stdlib.h>
using namespace std;

int sum(int a, int b, int c);
void grades(int a, int b, int c);

main(){
	
	int nim, uts, uas, tm;
	string nama;
	int pilih;
	char ulang;
	
	cout<<"NIM\t= ", cin>>nim;
	cout<<"Nama\t= ", cin>>nama;
	cout<<"UTS\t= ", cin>>uts;
	cout<<"UAS\t= ", cin>>uas;
	cout<<"TM\t= ", cin>>tm;
	system ("CLS");
	
	cout<<"[ Tabel Mahasiswa ]"<<endl;
	cout<<"==================="<<endl;
	cout<<"NIM\t= "<<nim<<endl;
	cout<<"Nama\t= "<<nama<<endl;
	cout<<"UTS\t= "<<uts<<endl;
	cout<<"UAS\t= "<<uas<<endl;
	cout<<"TM\t= "<<tm<<endl<<endl;
	
	cout<<endl;
	ye:
	cout<<"1. Nilai total"<<endl;
	cout<<"2. Grade"<<endl;
	cout<<"Pilihan = ", cin>>pilih;
	cout<<endl;
	switch(pilih){
		case 1:
			cout<<"Nilai total = ";
			cout<<sum(uts, uas, tm)<<endl;
			break;
		
		case 2:
			cout<<"Grade = ";
			grades(uts, uas, tm);
			cout<<endl;
			break;
	}
	
	cout<<"\nAnda ingin mengulang? (Y/N)", cin>>ulang;
	if(toupper(ulang)=='Y'){
		cout<<endl;
		goto ye;
	} else {
		cin.get();
	}
	
}

int sum(int a, int b, int c){
	int total = (a*20/100)+(b*40/100)+(c*40/100);
	return total;
}

void grades(int a, int b, int c){
	char grade;
	int d = sum(a,b,c);
	if(d>= 80 && d<=100){
		grade = 'A';
	} else if (d>= 70 && d<80){
		grade = 'B';
	} else if (d>= 50 && d<70){
		grade = 'C';
	} else if (d<50){
		grade = 'E';
	}
	cout<<grade;
}
