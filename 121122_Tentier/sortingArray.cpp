#include <iostream>
#include <algorithm> //kudu ada buat nge sorting
using namespace std;

int main(){

    int errei[10];              // size ny 4 (byte?) per indeks
    int errLen = sizeof(errei); //so, sizeof nya = 4x10 = 40
    int erreiLen = errLen / sizeof(errei[0]); // ini buat nyari panjang array nya, 40/4=10
    cout<<"errLen : "<< errLen<<endl;
    cout<<"erreilen : "<<erreiLen<<endl;
    cout<<endl;
    for (int i=0; i<erreiLen; i++){
        cout<<"Array indeks ke-c"<<i<<" : ";
        cin>>errei[i];
    }
    sort(errei, errei+erreiLen);
    cout<<"Array : "<<endl;
    for (int i=0; i<erreiLen; i++){
        cout<<errei[i]<<endl;
    }

    return 0;
}