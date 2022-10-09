/* Membuat algoritma (pseudocode) & program sederhana dari
input : tahun lahir, nama lengkap
output :"Hai, Salam kenal. Nama saya <<siapa>>. Tahun ini umur saya <<berapa>>."
*/

#include <iostream>
using namespace std;

int main() {
	
char siapa[30];
int berapa, tahun;
    cout<<"Masukkan nama = ";
    gets(siapa);
    cout<<"Masukkan tahun lahir = "; cin>>tahun;
    berapa = 2022-tahun;
    cout<<"Hai, Salam kenal. Nama saya "<< siapa << ". Tahun ini umur saya " << berapa << " tahun.";

    return 0;

}
