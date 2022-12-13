#include <iostream>
#include <algorithm> 
using namespace std;

void OpArray(int a[5]){
    cout<<"Array void = { ";
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<"}"<<endl;
}

int main (){
    // [DEKLARASI ARRAY - alternatif]
    array<int,5>huhu;    
    for(int i=0; i<5; i++){
        cout<<"Masukkan nilai indeks ke-"<<i<<" : ", cin>>huhu[i];
    }
    cout<<"Array = { ";
    for(int i=0; i<5; i++){
        cout<<huhu[i]<<" ";
    }
    cout<<"}"<<endl;

    sort(huhu.begin(), huhu.end());

    cout<<"==after sorting"<<endl;
    cout<<"Array = { ";
    for(int i=0; i<5; i++){
        cout<<huhu[i]<<" ";
    }
    cout<<"}"<<endl;

    int haha[5];
    for(int i=0; i<5; i++){
        haha[i] = huhu[i];
    }
    OpArray(haha);
    return 0;
}