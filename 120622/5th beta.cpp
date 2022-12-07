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
	//struct dulu
	data mahasiswa[2];
	mahasiswa[0].nim = 35200010;
	mahasiswa[0].nama = "Agus";
	mahasiswa[0].uts = 70;
	mahasiswa[0].uas = 100;
	mahasiswa[0].tm = 50;
	mahasiswa[0].sks = 4;
	
	mahasiswa[1].nim = 34190020;
	mahasiswa[1].nama = "Budi";
	mahasiswa[1].uts = 100;
	mahasiswa[1].uas = 60;
	mahasiswa[1].tm = 80;
	mahasiswa[1].sks = 2;
	
	int nim, uts, uas, tm, q;
	string nama;
	int pilih;
	char ulang;
	
	cout<<"[ Tabel Mahasiswa ]"<<endl;
	cout<<"==================="<<endl;
	cout<<"Jumlah mahasiswa = ", cin>>q;
	
	for (int i=0; i<q; i++){
		cout<<"Mahasiswa "<<i+1<<" :"<<endl;
		cout<<"NIM\t= "<<mahasiswa[i].nim<<endl;
		cout<<"Nama\t= "<<mahasiswa[i].nama<<endl;
		cout<<"UTS\t= "<<mahasiswa[i].uts<<endl;
		cout<<"UAS\t= "<<mahasiswa[i].uas<<endl;
		cout<<"TM\t= "<<mahasiswa[i].tm<<endl;
		cout<<"Sks\t= "<<mahasiswa[i].sks<<endl<<endl;
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
