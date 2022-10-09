#include <iostream>
#include <cstring>
using namespace std;

struct mahasiswa{
    int jumlah;
    char NIM[9];
    char nama[30];
}; 
		
int main(){
 	//Acong
 	struct mahasiswa Acong;
 	char a[30] = "Acong";
 	char b[9] = "35200001";
	mahasiswa e;
	strcpy(e.nama, a);
	strcpy(e.NIM , b);
	
	//Buditingkir
 	struct mahasiswa Buditingkir;
 	char aa[30] = "Buditingkir";
 	char bb[9] = "35200002";
 	mahasiswa f;
	strcpy(f.nama , aa);
	strcpy(f.NIM , bb);	
	
	//Salamsejahtera
 	struct mahasiswa Salamsejahtera;
  	char aaa[30] = "Salamsejahtera";
 	char bbb[9] = "35200003";
 	mahasiswa g;
	strcpy(g.nama , aaa);
	strcpy(g.NIM , bbb);	

	
	/* MANGGIL
	cout<<e.NIM<<endl;
	cout<<e.nama<<endl;
	
	cout<<f.NIM<<endl;
	cout<<f.nama<<endl;
	
	cout<<g.NIM<<endl;
	cout<<g.nama<<endl;
	*/
	
	
	cout<<"========================================="<<endl;
	cout<<" NIM \t\tNama Mahasiswa \tJumlah"<<endl;
	cout<<e.NIM<<"\t"<<e.nama<<"\t\t"<<strlen(a)<<endl;
	cout<<f.NIM<<"\t"<<f.nama<<"\t"<<strlen(aa)<<endl;
	cout<<g.NIM<<"\t"<<g.nama<<"\t"<<strlen(aaa)<<endl;
	
	return 0;
}


