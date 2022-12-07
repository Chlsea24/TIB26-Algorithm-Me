#include <iostream>
using namespace std;

struct mhs{
	string nama;
	int nim;
	float uts;
	float uas;
	float tm;
	float nt;
};

char Grades(int a){
	char grade;
	if (a > 80){
		grade ='A';
	}else if (a>70){
		grade='B';
	}else if (a>50){
		grade='C';
	}else if (a<=50){
		grade='E';
	}
	return grade;
}

int main (){
    int nilai;
    int grade;
    mhs mahasiswa1, mahasiswa2;
    
    mahasiswa1.nama = "Agus";
    mahasiswa1.nim = 35200010;
    mahasiswa1.uts = 70;
    mahasiswa1.uas = 100;
    mahasiswa1.tm = 50;
    
    mahasiswa2.nama = "Budi";
    mahasiswa2.nim = 39190020;
    mahasiswa2.uts = 100;
    mahasiswa2.uas = 60;
    mahasiswa2.tm = 80;
    
    cout<< "Tabel Mahasiswa"<<endl;
    cout<< "Nama = " <<mahasiswa1.nama<<endl;
    cout<< "Nim  = " <<mahasiswa1.nim<<endl;
    cout<< "UTS  = " <<mahasiswa1.uts<<endl;
    cout<< "UAS  = " <<mahasiswa1.uas<<endl;
    cout<< "TM   = " <<mahasiswa1.tm<<endl;
    
    nilai = (mahasiswa1.uts*20/100)+(mahasiswa1.uas*40/100)+(mahasiswa1.tm*40/100);
    
    cout<<"1. Nilai ="<<nilai<<endl;
    cout<<"2. Grade ="<< Grades(nilai) <<endl;
    
    cout<< "Nama = " <<mahasiswa2.nama<<endl;
    cout<< "Nim  = " <<mahasiswa2.nim<<endl;
    cout<< "UTS  = " <<mahasiswa2.uts<<endl;
    cout<< "UAS  = " <<mahasiswa2.uas<<endl;
    cout<< "TM   = " <<mahasiswa2.tm<<endl;
    
    nilai = (mahasiswa2.uts*20/100)+(mahasiswa2.uas*40/100)+(mahasiswa2.tm*40/100);
    
    cout<<"1. Nilai = "<<nilai<<endl;
    cout<<"2. Grade = "<< Grades(nilai) <<endl;
    
}
