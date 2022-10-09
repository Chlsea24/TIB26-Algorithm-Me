#include <iostream>
using namespace std;

int main(){

    cout<<"===MATRIX MULTIPLICATION==="<<endl;

    int c1, b1, c2, b2, i, j, k;
    cout<<"[ Matrix 1 ]"<<endl;
    cout<<"column : ", cin>>c1;
    cout<<"row : ", cin>>b1;

    cout<<endl;

    int m1[b1][c1];
    for (i=0; i<b1; i++){
        cout<<"Enter the "<<i+1<<" row"<<endl;
        for (j=0; j<c1; j++){
            cin>>m1[i][j];
        }
        cout<<endl;
    }

    cout<<"Matriks 1 :"<<endl;
	for(int i = 0; i < b1; i++){
    	for(int j = 0; j < c1; j++){
        	cout << m1[i][j] << " ";
    	}
    	cout<<endl;
    }

    cout<<endl;

    cout<<"[ Matrix 2 ]"<<endl;
    cout<<"column : ", cin>>c2;
    cout<<"row : ", cin>>b2;

    cout<<endl;

    int m2[b2][c2];
    for (i=0; i<b2; i++){
        cout<<"Enter the "<<i+1<<" row"<<endl;
        for (j=0; j<c2; j++){
            cin>>m2[i][j];
        }
        cout<<endl;
    }
    
    cout<<endl;

    cout<<"Matriks 2 :"<<endl;
	for(int i = 0; i < b2; i++){
    	for(int j = 0; j < c2; j++){
        	cout << m2[i][j] << " ";
    	}
    	cout<<endl;
    }

    int m3[b1][c2];

    if (c1 == b2){
        for (i=0; i<b1; i++){
            for (j=0; j<c2; j++){
                m3[i][j]=0;
                for (k=0; k<= c2; k++){
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
    } else {
        cout<<"[ Sorry, your matrix can not be multiplied. ]"<<endl;
        return 0;
    }

    cout<<endl;

    cout<<"So, the result is : "<<endl;
    for (i=0; i<b1; i++){
        for (j=0; j<c2; j++){
            cout<<m3[i][j]<<" ";
        }
        cout<<endl;
    }
}