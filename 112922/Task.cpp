/*
    NIM         Nama    UTS UAS TM SKS
    35200010    Agus    70  100 50  4
    34190020    Budi    100 60  80  2
*/

#include<iostream>
using namespace std;

int sum(int a, int b, int c);
char grades(int a, int b, int c);
float ipk(float a, float b, float c, float s);

struct data{
	int nim;
	string nama;
	int uts, uas, tm, sks;
};

main(){
	int nim, uts, uas, tm, q;
	string nama;
	int pilih;
	char ulang;
	
	cout<<"[ Tabel Mahasiswa ]"<<endl;
	cout<<"==================="<<endl;
	cout<<"Jumlah mahasiswa = ", cin>>q;
	struct data mahasiswa[q];
    
	for (int i=0; i<q; i++){
		cout<<"Mahasiswa "<<i+1<<" :"<<endl;
		cout<<"NIM\t= ", cin>>mahasiswa[i].nim;
		cout<<"Nama\t= ", cin>>mahasiswa[i].nama;
		cout<<"UTS\t= ", cin>>mahasiswa[i].uts;
		cout<<"UAS\t= ", cin>>mahasiswa[i].uas;
		cout<<"TM\t= ", cin>>mahasiswa[i].tm;
		cout<<"Sks\t= ", cin>>mahasiswa[i].sks;
        cout<<endl;
	}
	cout<<endl;
	ye:
	cout<<"1. Nilai total"<<endl;
	cout<<"2. Grade"<<endl;
	cout<<"3. IPK"<<endl;
	cout<<"Pilihan = ", cin>>pilih;
	cout<<endl;
	
	switch(pilih){
		case 1:
			for (int i=0;i<q;i++){
				cout<<"Nilai total mahasiswa "<< i+1 << " = ";
				cout<<sum(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tm)<<endl;
			}
			break;
		
		case 2:
			for (int i=0;i<q;i++){
				cout<<"Grade mahasiswa "<<i+1<<" = ";
				cout<<grades(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tm);
				cout<<endl;
			}
			break;
		
		case 3:
			for (int i=0;i<q;i++){
				cout<<"IPK mahasiswa "<<i+1<<" = ";
				cout<<ipk(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tm, mahasiswa[i].sks);
				cout<<endl;
			}
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

char grades(int a, int b, int c){
	char grade;
	int bobot;
	
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
	return grade;
}

float ipk(float a, float b, float c, float s){
	char e = grades (a,b,c);
	float bobot;
	float ipk;
	if(e=='A'){
		bobot = 4;
	} else if (e=='B'){
		bobot = 3;
	} else if (e=='C'){
		bobot = 2;
	} else if (e=='E'){
		bobot = 1;
	}
	
	ipk = bobot/s;
	return ipk;
	
}