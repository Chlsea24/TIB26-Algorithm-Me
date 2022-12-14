#include <iostream>
#include <string.h>
using namespace std;

int sum(int a, int b, int c);
void grades(int a, int b, int c);
void header();

struct data {
    char nim[8];
    char nama[10];
    int uts, uas, tm, score;
};

int main(){
    struct data mahasiswa[3];
    strcpy(mahasiswa[0].nim, "31190010");
    strcpy(mahasiswa[0].nama, "Agus");
    mahasiswa[0].uts = 80;
    mahasiswa[0].uas = 90;
    mahasiswa[0].tm = 100;

    strcpy(mahasiswa[1].nim, "32200020");
    strcpy(mahasiswa[1].nama, "Budi");
    mahasiswa[1].uts = 70;
    mahasiswa[1].uas = 50;
    mahasiswa[1].tm = 20;

    strcpy(mahasiswa[2].nim, "32200021");
    strcpy(mahasiswa[2].nama, "Wati");
    mahasiswa[2].uts = 60;
    mahasiswa[2].uas = 50;
    mahasiswa[2].tm = 60;

    for(int i=0; i<3; i++){
        mahasiswa[i].score = sum(mahasiswa[i].uts, mahasiswa[i].tm, mahasiswa[i].uas);
    }

    cout<<"\n";

    for(int i=0; i<3; i++){
        header();
        cout<<"NIM : "<<mahasiswa[i].nim<<endl;
        cout<<"Nama : "<<mahasiswa[i].nama<<endl;
        header();
        cout<<"UTS : "<<mahasiswa[i].uts<<endl;
        cout<<"UAS : "<<mahasiswa[i].uas<<endl;
        cout<<"TM : "<<mahasiswa[i].tm<<endl;
        header();
        cout<<"Nilai akhir : "<<mahasiswa[i].score<<endl;
        cout<<"Grade : ";
        grades(mahasiswa[i].uts, mahasiswa[i].tm, mahasiswa[i].uas);
        cout<<endl;        
    }
    return 0;
}

int sum(int a, int b, int c){
    int total = (a*30/100)+(b*20/100)+(c*50/100);
    return total;
}

void grades(int a, int b, int c){
    char grade;
    int d = sum(a,b,c);
    if(d>=80 && d<=100){
        grade = 'A';
    } else if (d>=68 && d<=79){
        grade = 'B';
    }else if (d>=56 && d<=67){
        grade = 'C';
    }else if (d>=42 && d<=55){
        grade = 'D';
    }else if (d>=0 && d<=41){
        grade = 'E';
    }
    cout<<grade;
}

void header(){
    cout<<"=========="<<endl;
}