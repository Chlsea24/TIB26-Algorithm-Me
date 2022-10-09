/*	1 2
	3 4 */
#include <iostream>
using namespace std;

int main(){
	
	int i,j;
	int a[2][2] = {{2,4} , {0,3}};
	
	cout<< a[0][0]<< " " << a[0][1] << endl;
	cout<< a[1][0]<< " " << a[1][1] << endl;
	cout<<endl;
	for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
        	cout << a[i][j] << " ";
    	}
    	cout<<endl;
    }
    cout<<"\n===Mr==="<<endl;
    for (int i=0; i<2; i++){
    	for (int j=0; j<2; j++){
    		cout<<a[i][j]<<" ";
    	}
    	cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    int b[2][3] = {{2,4,1} , {0,3,5}};
	
	for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 3; j++){
        	cout << a[i][j] << " ";
    	}
    	cout<<endl;
    }
	return 0;
}
