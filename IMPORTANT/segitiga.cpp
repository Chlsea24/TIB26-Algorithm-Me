#include <iostream>
using namespace std;

int main(){
    int i, j;
    cout<<"===ForLoop==="<<endl;
    for (i=1; i<=5; i++){
        for (j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<""<< endl;
    }

    cout << "bisa kan?"<<endl;

    for (i=5; i>=1; i--){
        for (j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<"*"<< endl;
    }

    cout << "yok cari bedanya"<<endl;

    for (i=1; i<=5; i++){
        for (j=5; j>=i; j--){
            cout<<"*";
        }
        cout<<" "<< endl;
    }

    cout << "BELOMMMM"<<endl;

    for(int i = 1; i <= 5; i++) { // 1-5
            // spasi
            for (int j = 5; j >= (i + 1); j--) { // 5-(i+1) 5-3
                cout<<"  ";
            }

            // bintang
            for(int k = 1; k <= i; k++) { // 1-i 1-5
                cout<<"* ";
            }

            cout<<endl;
        }

    return 0;
}