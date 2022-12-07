#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h> 
using namespace std;

int matrix();
void menu();

int sort(int data[5]){
	int uk;
	
	for(int i=0; i<5; i++){
		for (int j=i+1; j<5; j++){
			if(data[i]>data[j]){
				uk=data[i];
				data[i]=data[j];
				data[j]=uk;
			}
		}
	}
	cout<<"Mengurutkan data"<<endl;
	cout<<"Data no 2 = {";
	
	for(int i=0; i<5; i++){
		cout<< data[i] << " ";
		if(i==4){
			cout<<data[i]<<"}";
		}
	}
	
}

main(){
	start:
	cout<<"[WELCOME]"<<endl;
	int choose;
	char apapun;
	menu();
	cin>>choose;
	if (choose!=1 && choose!=2 && choose!=3 && choose!=4){	
		system ("CLS");
		goto start;
	}
	switch(choose){
		case 1:
			matrix();
			break;
		case 2:
			int insert[5];
			for(int i=0; i<5; i++){
				cout<<"Masukkan data ke-"<<i+1<<" : ";
				cin>>insert[i];
			}
			
			cout<<"Ingin di urutkan?";
			cin>>apapun;
			if(toupper(apapun)=='Y'){
				goto sini;
			}
			break;
		case 3:
			sini:
			sort(insert);
			break;
			
		case 4 : 
			cin.get();
			goto end;
	}
	
	char replay;
	cout<<"\n(press any key)";
	cin>>replay;
	if(toupper(replay)=='Y'){
		system ("CLS");
		goto start;
	} else {
		system ("CLS");
		goto start;
	}
	
	end:
	cout<<"[SELESAI]"<<endl;
}

void menu(){
	int choose;
	cout<<"Menu :"<<endl;
	cout<<"1. Menghitung penjumlahan matriks 3x3"<<endl;
	cout<<"2. Insert data (5 data)"<<endl;
	cout<<"3. Sorting data"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Masukkan pilihan anda : ";
}

int matrix(){
	int mtrx1[3][3];
	int mtrx2[3][3];
	int jumlahan[3][3];
	
	cout<<"[Matrix 3x3]"<<endl;
	cout<<"Matriks 1 :"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Masukkan nilai matriks ["<<i<<"]["<<j<<"]= ";
			cin>>mtrx1[i][j];
		}
		cout<<endl;
	}
	cout<<"Matriks 2 :"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Masukkan nilai matriks ["<<i<<"]["<<j<<"]= ";
			cin>>mtrx2[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Hasil Penjumlahan :"<<endl;
	for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
			jumlahan[i][j]= mtrx1[i][j]+mtrx2[i][j];
			cout<<jumlahan[i][j]<< " ";
    	}
    	cout<<endl;
    }
	
	
	return jumlahan[3][3];
}
