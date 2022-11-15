#include <iostream>
#include <cstring>
using namespace std;

struct data {
	char name[30];
	int nim;
	int uts;
	int uas;
	int prak;
	int tm;
};

void header(){
	cout<<"=============================="<<endl;
	cout<<"========Universitas xyz======="<<endl;
}

void identitas(int k, string np, int nm, int t, string ne){
	cout<<"Kode Prodi\t: "<<k<<endl;
	cout<<"Nama prodi\t: "<<np<<endl;
	cout<<"NIM\t\t: "<<nm<<endl;
	cout<<"Tahun masuk\t: "<<t<<endl;
	cout<<"Nama mahasiswa\t: "<<ne<<endl;
}

void nilaii(int ts, int as, int pk, int tm, int sum){
	cout<<"UTS\t\t: "<<ts<<endl;
	cout<<"UAS\t\t: "<<as<<endl;
	cout<<"Praktek\t\t: "<<pk<<endl;
	cout<<"TM\t\t: "<<tm<<endl;
	cout<<"Nilai total\t: "<<sum<<endl;
}

void final(char g, string h){
	cout<<"Grade\t\t: "<<g<<endl;
	cout<<"Status\t\t: "<<h<<endl<<endl;
	cout<<"=============================="<<endl;
}
main(){
	
	data maha1;
	strcpy(maha1.name, "Andi");
	maha1.nim = 31200019;
	maha1.uts = 40;
	maha1.uas = 20;
	maha1.prak = 40;
	maha1.tm = 0;
	
	data maha2;
	strcpy(maha2.name, "Cinta");
	maha2.nim = 32190001;
	maha2.uts = 20;
	maha2.uas = 80;
	maha2.prak = 0;
	maha2.tm = 100;
	
	data maha3;
	strcpy(maha3.name, "Dodi");
	maha3.nim = 33050002;
	maha3.uts = 80;
	maha3.uas = 80;
	maha3.prak =100;
	maha3.tm = 0;
	
	data maha4;
	strcpy(maha4.name, "Budi");
	maha4.nim = 35210010;
	maha4.uts = 90;
	maha4.uas = 85;
	maha4.prak = 80;
	maha4.tm = 0;
	
	data maha5;
	strcpy(maha5.name, "Eko");
	maha5.nim = 36210020;
	maha5.uts = 100;
	maha5.uas = 80;
	maha5.prak = 0;
	maha5.tm = 85;
	
	start:
	int nim, total, kode, tahun, uts, uas, prak, tm;
	char grade, akses;
	char namap[20];
	string status, name;
	
	cout<<"Kode prodi : ", cin>>kode;
	if (kode!=31 && kode!=32 && kode!=33 && kode!=35 && kode!=36){
		cout<<"Maaf, kode yang anda masukkan tidak terdeteksi."<<endl;
		cout<<"Silahkan coba lagi."<<endl<<endl;
		goto start;
	}
	now:
	cout<<"Masukkan NIM : ", cin>>nim;
	if (nim!=maha1.nim && nim!=maha2.nim && nim!=maha3.nim && nim!=maha4.nim && nim!=maha5.nim){
		cout<<"Maaf, nim yang anda masukkan tidak terdaftar."<<endl;
		cout<<"Silahkan coba lagi."<<endl<<endl;
		goto now;
	}
	cout<<endl;
	header();
	if (kode == 31 && nim == 31200019){
		strcpy(namap, "Informatika");
		tahun = 2020;
		name = maha1.name;
		identitas(kode, namap, nim, tahun, name);
		
		uts= maha1.uts;
		uas = maha1.uas;
		prak = maha1.prak;
		tm = maha1.tm;
		total = (maha1.uts*20/100)+(maha1.uas*40/100)+(maha1.prak*40/100)+maha1.tm;
		
		nilaii(uts, uas, prak, tm, total);
		
	} /* else {
		if (kode == 32 && nim == 32190001){
			cout<<"Nama prodi\t: Sistem Informasi"<<endl;
			cout<<"NIM\t\t: "<<nim<<endl;
			cout<<"Tahun masuk\t: 2019"<<endl;
			cout<<"Nama mahasiswa\t: "<<maha2.name<<endl;
			cout<<"UTS\t\t: "<<maha2.uts<<endl;
			cout<<"UAS\t\t: "<<maha2.uas<<endl;
			cout<<"Praktek\t\t: "<<maha2.prak<<endl;
			cout<<"TM\t\t: "<<maha2.tm<<endl;
		
			total = (maha2.uts*30/100)+(maha2.uas*40/100)+maha2.prak+(maha2.tm*30/100);
			cout<<"Nilai total\t: "<<total<<endl;
		
		} else {
			if (kode == 33 && nim == 33050002){
			cout<<"Nama prodi\t: Teknik Industri"<<endl;
			cout<<"NIM\t\t: "<<nim<<endl;
			cout<<"Tahun masuk\t: 2005"<<endl;
			cout<<"Nama mahasiswa\t: "<<maha3.name<<endl;
			cout<<"UTS\t\t: "<<maha3.uts<<endl;
			cout<<"UAS\t\t: "<<maha3.uas<<endl;
			cout<<"Praktek\t\t: "<<maha3.prak<<endl;
			cout<<"TM\t\t: "<<maha3.tm<<endl;
		
			total = (maha3.uts*30/100)+(maha3.uas*40/100)+(maha3.prak*30/100)+maha3.tm;
			cout<<"Nilai total\t: "<<total<<endl;
			
			} else {
				if (kode == 35 && nim == 35210010){
					cout<<"Nama prodi\t: Bisnis Digital"<<endl;
					cout<<"NIM\t\t: "<<nim<<endl;
					cout<<"Tahun masuk\t: 2021"<<endl;
					cout<<"Nama mahasiswa\t: "<<maha4.name<<endl;
					cout<<"UTS\t\t: "<<maha4.uts<<endl;
					cout<<"UAS\t\t: "<<maha4.uas<<endl;
					cout<<"Praktek\t\t: "<<maha4.prak<<endl;
					cout<<"TM\t\t: "<<maha4.tm<<endl;
		
					total = (maha4.uts*30/100)+(maha4.uas*40/100)+(maha4.prak*30/100)+maha4.tm;
					cout<<"Nilai total\t: "<<total<<endl;
					
				} else {
					if (kode == 36 && nim == 36210020){
						cout<<"Nama prodi\t: Data Science"<<endl;
						cout<<"NIM\t\t: "<<nim<<endl;
						cout<<"Tahun masuk\t: 2021"<<endl;
						cout<<"Nama mahasiswa\t: "<<maha5.name<<endl;
						cout<<"UTS\t\t: "<<maha5.uts<<endl;
						cout<<"UAS\t\t: "<<maha5.uas<<endl;
						cout<<"Praktek\t\t: "<<maha5.prak<<endl;
						cout<<"TM\t\t: "<<maha5.tm<<endl;
		
						total = (maha5.uts*20/100)+(maha5.uas*40/100)+maha5.prak+(maha5.tm*40/100);
						cout<<"Nilai total\t: "<<total<<endl;

					} else {
						cout<<"Kode dan NIM yang anda masukkan tidak sesuai."<<endl;
						cout<<"Silahkan coba lagi."<<endl<<endl;
						goto start;
					}
				}
			}
		}
	
	} */	 
	
	if (total >= 80){
			grade = 'A';
	} else {
		if (total >= 70 && total <= 79){
			grade = 'B';
		} else {
			if (total >= 60 && total <= 69){
				grade = 'C';
			} else {
				if (total >= 50 && total <= 59){
					grade = 'D';
				} else {
					if (total >=0 && total <=49){
						grade = 'E';
					} else {
						cout<<"Nilai yang anda masukkan salah."<<endl;
						cout<<"Silahkan coba lagi."<<endl;
						goto start;
					}
				}
			}
		}
	}
		
	switch (grade){
		case 'A':
			status = "Lulus";
			break;
		
		case 'B':
			status = "Lulus";
			break;
		
		case 'C':
			status = "Remedial";
			break;
		
		case 'D':
			status = "Tidak Lulus";
			break;
		
		case 'E':
			status = "Tidak Lulus";
			break;
	}
	
	final(grade, status);
	
	cout<<"Apakah anda ingin mengakses lagi?", cin>>akses;
	if (toupper(akses)== 'Y'){
		cout<<endl;
		goto start;
	} else {
		cin.get();
	}
	
}
