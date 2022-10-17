#include <iostream>
#include <string.h>
using namespace std;

struct list{
    char namae[50];
    int tahun;
    int umur;
    char codename[10];
    int chara;
    bool compare;
};

main() {

    list mmbr[4];

    //ichi
    strcpy(mmbr[0].namae, "Inu");
    strcpy(mmbr[0].codename, "Anjing");
    mmbr[0].tahun=2000;
    mmbr[0].umur=2022-mmbr[0].tahun;
    mmbr[0].chara=strlen(mmbr[0].namae);
    mmbr[0].compare=strcmp(mmbr[0].namae, mmbr[0].codename);

    //ni
    strcpy(mmbr[1].namae, "Bhuta");
    strcpy(mmbr[1].codename, "Babi");
    mmbr[1].tahun=2001;
    mmbr[1].umur=2022-mmbr[1].tahun;
    mmbr[1].chara=strlen(mmbr[1].namae);
    mmbr[1].compare=strcmp(mmbr[1].namae, mmbr[1].codename);

    //san
    strcpy(mmbr[2].namae, "Yae");
    strcpy(mmbr[2].codename, "Kambing");
    mmbr[2].tahun=2002;
    mmbr[2].umur=2022-mmbr[2].tahun;
    mmbr[2].chara=strlen(mmbr[2].namae);
    mmbr[2].compare=strcmp(mmbr[2].namae, mmbr[2].codename);

    //nya
    strcpy(mmbr[3].namae, "Saru");
    strcpy(mmbr[3].codename, "Monyet");
    mmbr[3].tahun=2003;
    mmbr[3].umur=2022-mmbr[3].tahun;
    mmbr[3].chara=strlen(mmbr[3].namae);
    mmbr[3].compare=strcmp(mmbr[3].namae, mmbr[3].codename);

    cout<<"============================================================="<<endl;
    cout<<"Nama\tUmur\t Code\t  Chara      value"<<endl;
    cout<<mmbr[0].namae<<"\t";
    cout<<mmbr[0].umur<<"\t";
    cout<<mmbr[0].codename<<"\t  ";
    cout<<mmbr[0].chara<<"\t\t";
    cout<<mmbr[0].compare<<endl;

    cout<<mmbr[1].namae<<"\t";
    cout<<mmbr[1].umur<<"\t";
    cout<<mmbr[1].codename<<"\t  ";
    cout<<mmbr[1].chara<<"\t\t";
    cout<<mmbr[1].compare<<endl;

    cout<<mmbr[2].namae<<"\t";
    cout<<mmbr[2].umur<<"\t";
    cout<<mmbr[2].codename<<"\t  ";
    cout<<mmbr[2].chara<<"\t\t";
    cout<<mmbr[2].compare<<endl;

    cout<<mmbr[3].namae<<"\t";
    cout<<mmbr[3].umur<<"\t";
    cout<<mmbr[3].codename<<"\t  ";
    cout<<mmbr[3].chara<<"\t\t";
    cout<<mmbr[3].compare<<endl;
    cout<<"============================================================="<<endl;
    cout<<"done."<<endl;
}