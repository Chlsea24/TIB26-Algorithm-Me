#include <iostream>
using namespace std;

int main(){
	
	int i,j, k;
	int a[2][2] = {{2,4} , {0,3}};
	int b[2][2] = {{1,0} , {0,1}};
	int c[2][2] = {{0,0} , {0,0,}};
	
	cout<<"Matriks A"<<endl;
	for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
        	cout << a[i][j] << " ";
    	}
    	cout<<endl;
    }
    cout<<endl;
    cout<<"Matriks B"<<endl;
    for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
        	cout << b[i][j] << " ";
    	}
    	cout<<endl;
    }
	cout<<"\n===Penjumlahan matriks==="<<endl;
	
	for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
        	cout << a[i][j]+b[i][j] << " ";
    	}
    	cout<<endl;
    }
    
    cout<<"\n===Pengurangan matriks==="<<endl;
	
	for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
        	cout << a[i][j]-b[i][j] << " ";
    	}
    	cout<<endl;
    }
    
    cout<<"\n===Perkalian Matriks===\n";    
	for(i=0;i<2;i++){    
		for(j=0;j<2;j++) {        
			for(k=0;k<2;k++){    
				c[i][j]+=a[i][k]*b[k][j];   
			}    
			cout<<c[i][j]<<" ";
		}
		cout<<"\n"; 
	}   
	return 0;
}
