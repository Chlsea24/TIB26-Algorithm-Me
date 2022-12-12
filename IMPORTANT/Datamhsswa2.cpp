#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <sstream>

using namespace std;
void garis();
void header();

struct mahasiswa
{
	char nomorindukmahasiswa[10];
	char namamahasiswa[10];
	int uts,uas,praktek,tugasmandiri;
};

main()
{
	int kdprodi, nuts, nuas, npraktek, ntm, bobotuts, bobotuas, bobotpraktek, bobottm, nilaitotal;
	char p, nmprodi[20], nim[10], nmmhs[10], grade[2], status[20];
	string potong;
	mahasiswa b[10];
	A:
	system("cls");
	strcpy(b[0].nomorindukmahasiswa,"31200019");
	strcpy(b[0].namamahasiswa,"andi");
	b[0].uts=40;
	b[0].uas=20;
	b[0].praktek=40;
	b[0].tugasmandiri=40;
	
	strcpy(b[1].nomorindukmahasiswa,"32190001");
	strcpy(b[1].namamahasiswa,"cinta");
	b[1].uts=20;
	b[1].uas=80;
	b[1].praktek=0;
	b[1].tugasmandiri=100;
	
	strcpy(b[2].nomorindukmahasiswa,"33050002");
	strcpy(b[2].namamahasiswa,"dodi");
	b[2].uts=80;
	b[2].uas=80;
	b[2].praktek=100;
	b[2].tugasmandiri=0;
	
	strcpy(b[3].nomorindukmahasiswa,"35210010");
	strcpy(b[3].namamahasiswa,"budi");
	b[3].uts=90;
	b[3].uas=85;
	b[3].praktek=80;
	b[3].tugasmandiri=0;
		
	strcpy(b[4].nomorindukmahasiswa,"36510020");
	strcpy(b[4].namamahasiswa,"eko");
	b[4].uts=100;
	b[4].uas=80;
	b[4].praktek=0;
	b[4].tugasmandiri=85;	
		
	header();
	cout<<"kode prodi = ";cin>>kdprodi;
	
	
	if(kdprodi==31)
	{
		strcpy(nmprodi,"informatika");
		bobotuts=20;
		bobotuas=40;
		bobotpraktek=40;
		bobottm=0;
	}
	else if(kdprodi==32)
	{
		strcpy(nmprodi,"sistem informasi");
		bobotuts=30;
		bobotuas=40;
		bobotpraktek=0;
		bobottm=30;
	}
	else if(kdprodi==33)
	{
		strcpy(nmprodi,"teknik industri");
		bobotuts=30;
		bobotuas=40;
		bobotpraktek=30;
		bobottm=0;
	}
	else if(kdprodi==35)
	{
		strcpy(nmprodi,"bisnis digital");
		bobotuts=30;
		bobotuas=40;
		bobotpraktek=30;
		bobottm=0;
	}
	else if(kdprodi==36)
	{
		strcpy(nmprodi,"data science");
		bobotuts=20;
		bobotuas=40;
		bobotpraktek=0;
		bobottm=40;
	}
	else
	{
		cout<<"\nkode prodi tidak ada !!!";
		getch();
		goto A;
	}
	
	cout<<"nim = ";cin>>nim;
 
	stringstream ss;
	potong=nim;

	ss<<potong.substr(0,2);
	int x;
	ss>>x;

	
	if(x!=kdprodi)
	{
		cout<<"\nnim tidak sesuai dengan kode prodi yang dimasukkan !!!";
		getch();
		goto A;
	}
	
	if(strcmp(nim,b[0].nomorindukmahasiswa)==0)
	{
		strcpy(nmmhs,b[0].namamahasiswa);
		nuts=b[0].uts;
		nuas=b[0].uas;
		npraktek=b[0].praktek;
		ntm=b[0].tugasmandiri;
	}
	else if(strcmp(nim,b[1].nomorindukmahasiswa)==0)
	{
		strcpy(nmmhs,b[1].namamahasiswa);
		nuts=b[1].uts;
		nuas=b[1].uas;
		npraktek=b[1].praktek;
		ntm=b[1].tugasmandiri;
	}
	else if(strcmp(nim,b[2].nomorindukmahasiswa)==0)
	{
		strcpy(nmmhs,b[2].namamahasiswa);
		nuts=b[2].uts;
		nuas=b[2].uas;
		npraktek=b[2].praktek;
		ntm=b[2].tugasmandiri;
	}
	else if(strcmp(nim,b[3].nomorindukmahasiswa)==0)
	{
		strcpy(nmmhs,b[3].namamahasiswa);
		nuts=b[3].uts;
		nuas=b[3].uas;
		npraktek=b[3].praktek;
		ntm=b[3].tugasmandiri;
	}
	else if(strcmp(nim,b[4].nomorindukmahasiswa)==0)
	{
		strcpy(nmmhs,b[4].namamahasiswa);
		nuts=b[4].uts;
		nuas=b[4].uas;
		npraktek=b[4].praktek;
		ntm=b[4].tugasmandiri;
	}
	else
	{
		cout<<"\nnim tidak ada !!!";
		getch();
		goto A;
	}
	
	nilaitotal=((bobotuts*nuts)+(bobotuas*nuas)+(bobotpraktek*npraktek)+(bobottm*ntm))/100;
	
	if(nilaitotal>=80)
	{
		strcpy(grade,"A");
		strcpy(status,"lulus");
	}
	else if(nilaitotal>=70)
	{
		strcpy(grade,"B");
		strcpy(status,"lulus");
	}
	else if(nilaitotal>=60)
	{
		strcpy(grade,"C");
		strcpy(status,"tidak lulus");
	}
	else if(nilaitotal>=50)
	{
		strcpy(grade,"D");
		strcpy(status,"tidak lulus");
	}
	else if(nilaitotal>=0)
	{
		strcpy(grade,"E");
		strcpy(status,"tidak lulus");
	}
	
	getch();
	system("cls");	
	header();
	cout<<"kode prodi = "<<kdprodi<<endl;
	cout<<"nama prodi = "<<nmprodi<<endl;
	cout<<"nim = "<<nim<<endl;
	cout<<"nama mahasiswa = "<<nmmhs<<endl;
	garis();
	cout<<"uts = "<<nuts<<endl;
	cout<<"uas = "<<nuas<<endl;
	cout<<"praktek = "<<npraktek<<endl;
	cout<<"tugas mandiri = "<<ntm<<endl;
	garis();
	cout<<"nilai total = "<<nilaitotal<<endl;
	cout<<"grade = "<<grade<<endl;
	cout<<"status = "<<status<<endl;
	
	cout<<"\n\nulang ?";cin>>p;
	if(p=='Y' || p=='y')
	{
		goto A;
	}
}

void garis()
{
	for(int i=1;i<=30;i++)
	{
		cout<<"=";
	}
	cout<<endl;
}

void header()
{
	garis();
	cout<<"universitas xyz"<<endl;
	garis();
}