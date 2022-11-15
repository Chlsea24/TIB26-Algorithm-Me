#include <iostream>
#include <string.h>
using namespace std;

struct TMAC{
    char namae[50];
    int tahun;
    int umur;
    char codename[10];
    int chara;
    bool compare;
};

main() {

    TMAC mmbr[4];
    int i;
    //neesama
    strcpy(mmbr[0].namae, "Tri Ratna");
    strcpy(mmbr[0].codename, "Anjing");
    mmbr[0].tahun=2003;
    mmbr[0].umur=2022-mmbr[0].tahun;
    mmbr[0].chara=strlen(mmbr[0].namae);
    mmbr[0].compare=strcmp(mmbr[0].namae, mmbr[0].codename);

    //nisan
    strcpy(mmbr[1].namae, "Chelsea Effendi");
    strcpy(mmbr[1].codename, "Babi");
    mmbr[1].tahun=2003;
    mmbr[1].umur=2022-mmbr[1].tahun;
    mmbr[1].chara=strlen(mmbr[1].namae);
    mmbr[1].compare=strcmp(mmbr[1].namae, mmbr[1].codename);

    //maman
    strcpy(mmbr[2].namae, "Aurelia Christie Fabian");
    strcpy(mmbr[2].codename, "Kambing");
    mmbr[2].tahun=2004;
    mmbr[2].umur=2022-mmbr[2].tahun;
    mmbr[2].chara=strlen(mmbr[2].namae);
    mmbr[2].compare=strcmp(mmbr[2].namae, mmbr[2].codename);

    //mouto
    strcpy(mmbr[3].namae, "Melisca Andriani");
    strcpy(mmbr[3].codename, "Monyet");
    mmbr[3].tahun=2004;
    mmbr[3].umur=2022-mmbr[3].tahun;
    mmbr[3].chara=strlen(mmbr[3].namae);
    mmbr[3].compare=strcmp(mmbr[3].namae, mmbr[3].codename);

    cout<<"===TMAC COOPERATION==="<<endl;
    for(i=0; i<4; i++){
        cout<<"Nama :   "<<mmbr[i].namae<<endl;
        cout<<"Umur :   "<<mmbr[i].umur<<endl;
        cout<<"Kode :   "<<mmbr[i].codename<<endl;
        cout<<"Sum  :   "<<mmbr[i].chara<<endl;

        if(mmbr[i].compare == 0) {
            cout<<"TRUE"<<endl;
        } else {
            cout<<"FALSE"<<endl;
        }

        cout<<endl;
    }
}