#include <iostream>
using namespace std;

int main(){
	
	int i,j,k;
	int a[3][3] = {{2,4,3} , {2,0,3}, {2,5,1}};
	int b[3][3] = {{1,6,4} , {2,0,4}, {2,9,1}};
	int c[3][3] = {{0,0,0} , {0,0,0}, {0,0,0}};
	cout<<"Matriks A"<<endl;
	for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
        	cout << a[i][j] << " ";
    	}
    	cout<<endl;
    }
    cout<<endl;
    cout<<"Matriks B"<<endl;
    for(i = 0; i <= 2; i++){
    	for(j = 0; j <= 2; j++){
        	cout << b[i][j] << " ";
    	}
    	cout<<endl;
    }
	cout<<"\n===Penjumlahan matriks===\n";
	for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
        	cout << a[i][j]+b[i][j] << " ";
    	}
    	cout<<endl;
    }
    cout<<"\n===Pengurangan matriks===\n";
	for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
        	cout << a[i][j]-b[i][j] << " ";
    	}
    	cout<<endl;
    }
    cout<<"\nPerkalian Matriks=\n";    
	for(i=0;i<3;i++){    
		for(j=0;j<3;j++) {        
			for(k=0;k<3;k++){    
				c[i][j]+=a[i][k]*b[k][j];   
			}    
			cout<<c[i][j]<<" ";
		}
		cout<<"\n"; 
	}    

	return 0;
}
