#include <iostream>
#include <stdlib.h>
#include <algorithm> 
using namespace std;

int matrix();
void menu();

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
            array<int,5>insert;
			for(int i=0; i<insert.size(); i++){
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
			sort(insert.begin(), insert.end());

            cout<<"Array = {";
    
            for (int i=0; i<5; i++){
                if(i==4){
                    cout<<insert[i];
                } else {
                    cout <<insert[i]<<" ";
                }
            }

    cout<<"}";
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
