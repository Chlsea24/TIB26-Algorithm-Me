#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct NIM
{
	string kodeprodi;
	string bday;
};

struct Mahasiswa
{
	struct NIM nim;
	string final_nim;
	string Nama;
	int UTS;
	int UAS;
	int praktek;
	int TM;	
};

void nilaitotal(string kode_prodi, int UTS, int UAS, int praktek, int TM)
{
	int nilai_total;
	if (kode_prodi=="31")
	{
		nilai_total = (20*UTS/100) + (40*UAS/100) + (40*praktek/100);
	} else
	{
		if (kode_prodi=="32")
		{
			nilai_total = (30*UTS/100) + (40*UAS/100) + (30*TM/100);
		} else
		{
			if (kode_prodi=="33")
			{
				nilai_total = (30*UTS/100) + (40*UAS/100) + (30*praktek/100);
			} else
			{
				if (kode_prodi=="35")
				{
					nilai_total = (30*UTS/100) + (40*UAS/100) + (30*praktek/100);
				} else
				{
					if (kode_prodi=="36")
					{
						nilai_total = (20*UTS/100) + (40*UAS/100) + (40*praktek/100);
					}
				}
			}
		}
	}
	cout << "Nilai Total : " << nilai_total << endl;
	
	if ((nilai_total>=80) && (nilai_total<=100))
	{
		cout << "Grade : A" << endl;
		cout << "Status : Lulus" << endl;
	} else
	{
		if ((nilai_total>=70) && (nilai_total<=79))
		{
			cout << "Grade : B" << endl;
			cout << "Status : Lulus" << endl;
		} else
		{
			if ((nilai_total>=60) && (nilai_total<=69))
			{
				cout << "Grade : C" << endl;
				cout << "Status : Remedial" << endl;
			} else
			{
				if ((nilai_total>=50) && (nilai_total<=59))
				{
					cout << "Grade : D" << endl;
					cout << "Status : Tidak Lulus" << endl;
				} else
				{
					cout << "Grade : E" << endl;
					cout << "Status : Tidak Lulus" << endl;
				}
			}
		}
	}
}

int main(){

	//storing data
	struct Mahasiswa data[5];
	string NIM;
	
	//Andi
	data[0].nim.kodeprodi = "31";
	data[0].nim.bday = "200019";
	data[0].final_nim = data[0].nim.kodeprodi + data[0].nim.bday;
	data[0].Nama = "Andi";
	data[0].UTS = 40;
	data[0].UAS = 20;
	data[0].praktek = 40;
	data[0].TM = 0;
	
	//Cinta
	data[1].nim.kodeprodi = "32";
	data[1].nim.bday = "190001";
	data[1].final_nim = data[1].nim.kodeprodi + data[1].nim.bday;
	data[1].Nama = "Cinta";
	data[1].UTS = 20;
	data[1].UAS = 80;
	data[1].praktek = 0;
	data[1].TM = 100;
	
	//Dodi
	data[2].nim.kodeprodi = "33";
	data[2].nim.bday = "050002";
	data[2].final_nim = data[2].nim.kodeprodi + data[2].nim.bday;
	data[2].Nama = "Dodi";
	data[2].UTS = 80;
	data[2].UAS = 80;
	data[2].praktek = 100;
	data[2].TM = 0;
	
	//Budi
	data[3].nim.kodeprodi = "35";
	data[3].nim.bday = "210010";
	data[3].final_nim = data[3].nim.kodeprodi + data[3].nim.bday;
	data[3].Nama = "Budi";
	data[3].UTS = 90;
	data[3].UAS = 85;
	data[3].praktek = 80;
	data[3].TM = 0;
	
		
	//Eko
	data[4].nim.kodeprodi = "36";
	data[4].nim.bday = "210020";
	data[4].final_nim = data[4].nim.kodeprodi + data[4].nim.bday;
	data[4].Nama = "Eko";
	data[4].UTS = 100;
	data[4].UAS = 80;
	data[4].praktek = 0;
	data[4].TM = 85;
	
	string kode_prodi, input_nim;
	
	A:
	system("cls");
	cout << "================================" << endl;
	cout << "\tUniversitas XYZ" << endl;
	cout << "================================" << endl;
	
	//user input
	cout << "Kode Prodi : "; cin >> kode_prodi;
	
	//validasi kode prodi
	if ((kode_prodi!=data[0].nim.kodeprodi) && (kode_prodi!=data[1].nim.kodeprodi) && (kode_prodi!=data[2].nim.kodeprodi) && (kode_prodi!=data[3].nim.kodeprodi)
	&& (kode_prodi!=data[4].nim.kodeprodi))
	{
		cout << "(invalid! enter again!)" << endl;
		goto A;
	} else
	{
		cout << "NIM : "; cin >> input_nim;
		//validasi nim
		if ((input_nim!=data[0].final_nim) && (input_nim!=data[1].final_nim) && (input_nim!=data[2].final_nim) && (input_nim!=data[3].final_nim) && (input_nim!=data[4].final_nim))
		{
			cout << "(does not match, enter again!)" << endl;
			goto A;
		}
	}
	
	cout << endl;
	
	//output
	
	cout << "================================" << endl;
	cout << "\tUniversitas XYZ" << endl;
	cout << "================================" << endl;
	cout << "Kode Prodi : " << kode_prodi << endl;
	
	if (kode_prodi=="31")
	{
		cout << "Nama Prodi : Informatika" << endl;
	} else
	{
		if (kode_prodi=="32")
		{
			cout << "Nama Prodi : Sistem Informasi" << endl;
		} else
		{
			if (kode_prodi=="33")
			{
				cout << "Nama Prodi : Teknik Industri" << endl;
			} else
			{
				if (kode_prodi=="35")
				{
					cout << "Nama Prodi : Bisnis Digital" << endl;
				} else
				{
					if (kode_prodi=="36")
					{
						cout << "Nama Prodi : Data Science" << endl;
					}
				}
			}
		}
	}
	
	cout << "NIM : " << input_nim << endl;
	
	if (input_nim==data[0].final_nim)
	{
		cout << "Tahun Masuk : " << data[0].nim.bday << endl;
		cout << "Nama Mahasiswa : " << data[0].Nama << endl;
		cout << "UTS : " << data[0].UTS << endl;
		cout << "UAS : " << data[0].UAS << endl;
		cout << "Praktek : " << data[0].praktek << endl;
		cout << "TM : " << data[0].TM << endl;
		nilaitotal(kode_prodi, data[0].UTS, data[0].UAS, data[0].praktek, data[0].TM);
	} else
	{
		if (input_nim==data[1].final_nim)
		{
			cout << "Tahun Masuk : " << data[1].nim.bday << endl;
			cout << "Nama Mahasiswa : " << data[1].Nama << endl;
			cout << "UTS : " << data[1].UTS << endl;
			cout << "UAS : " << data[1].UAS << endl;
			cout << "Praktek : " << data[1].praktek << endl;
			cout << "TM : " << data[1].TM << endl;
			nilaitotal(kode_prodi, data[1].UTS, data[1].UAS, data[1].praktek, data[1].TM);
		} else
		{
			if (input_nim==data[2].final_nim)
			{
				cout << "Tahun Masuk : " << data[2].nim.bday << endl;
				cout << "Nama Mahasiswa : " << data[2].Nama << endl;
				cout << "UTS : " << data[2].UTS << endl;
				cout << "UAS : " << data[2].UAS << endl;
				cout << "Praktek : " << data[2].praktek << endl;
				cout << "TM : " << data[2].TM << endl;
				nilaitotal(kode_prodi, data[2].UTS, data[2].UAS, data[2].praktek, data[2].TM);
			} else 
			{
				if (input_nim==data[3].final_nim)
				{
					cout << "Tahun Masuk : " << data[3].nim.bday << endl;
					cout << "Nama Mahasiswa : " << data[3].Nama << endl;
					cout << "UTS : " << data[3].UTS << endl;
					cout << "UAS : " << data[3].UAS << endl;
					cout << "Praktek : " << data[3].praktek << endl;
					cout << "TM : " << data[3].TM << endl;
					nilaitotal(kode_prodi, data[3].UTS, data[3].UAS, data[3].praktek, data[3].TM);
				} else 
				{
					if (input_nim==data[4].final_nim)
					{
						cout << "Tahun Masuk : " << data[4].nim.bday << endl;
						cout << "Nama Mahasiswa : " << data[4].Nama << endl;
						cout << "UTS : " << data[4].UTS << endl;
						cout << "UAS : " << data[4].UAS << endl;
						cout << "Praktek : " << data[4].praktek << endl;
						cout << "TM : " << data[4].TM << endl;
						nilaitotal(kode_prodi, data[4].UTS, data[4].UAS, data[4].praktek, data[4].TM);
					}
				}
			}
		}
	}
}
