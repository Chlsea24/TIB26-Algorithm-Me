#include <iostream>
#include <string.h>
using namespace std;

struct nota
{
	char kodebarang[5];
	char namabarang[20];
	int harga;
};

int main()
{
	string kode;
	int nonota;
	int jumlahbeli;
	int bayar, totalharga, diskon, ppn, grandtotal;
	char pilih;
	
	cout<<"                              Rejeki Selalu                             "<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
A :	cout<<"No. Nota : ";cin>>nonota;
	
	//unsur barang
	struct nota data[5];
	
	char x[5] = "A001";
	char X[20] = "Buku";
	strcpy(data[0].kodebarang,x);
	strcpy (data[0].namabarang,X);
	data[0].harga = 10000;
	
	char y[5] = "B001";
	char Y[20] = "Pensil";
	strcpy(data[1].kodebarang,y);
	strcpy(data[1].namabarang,Y);
	data[1].harga=2000;
	
	char z[5] = "C001";
	char Z[20] = "Pulpen";
	strcpy(data[2].kodebarang,z);
	strcpy(data[2].namabarang,Z);
	data[2].harga=5000;
	
	char a[5] = "D001";
	char A[20] = "Penghapus";
	strcpy(data[3].kodebarang,a);
	strcpy(data[3].namabarang,A);
	data[3].harga=1000;
	
	char b[5] = "E001";
	char B[20] = "Spidol";
	strcpy(data[4].kodebarang,b);
	strcpy(data[4].namabarang,B);
	data[4].harga=8000;
	
h:	cout<<"Kode barang : ";cin>>kode;
    
    //nama & harga barang
	if(kode==data[0].kodebarang)
	{
		cout<<"Nama barang : "<<data[0].namabarang<<endl;
		cout<<"Harga satuan : "<<data[0].harga<<endl;
    }
	else
	{
	    if(kode==data[1].kodebarang)
	    {
		    cout<<"Nama barang : "<<data[1].namabarang<<endl;
		    cout<<"Harga satuan : "<<data[1].harga<<endl;
	    }
	   else
	   {
	       if(kode==data[2].kodebarang)
	        {
		        cout<<"Nama barang : "<<data[2].namabarang<<endl;
		        cout<<"Harga satuan : "<<data[2].harga<<endl;
	        }
	        else
	        {
	            if(kode==data[3].kodebarang)
	            {
		            cout<<"Nama barang : "<<data[3].namabarang<<endl;
		            cout<<"Harga satuan : "<<data[3].harga<<endl;
	            }
	            else
	            {
	                if(kode==data[4].kodebarang)
	                {
		                cout<<"Nama barang : "<<data[4].namabarang<<endl;
		                cout<<"Harga satuan : "<<data[4].harga<<endl;
	                }
	                else
	                {
	                    cout<<"Kode barang yang Anda masukkan tidak valid."<<endl;
	                    cout<<"Silakan input ulang kode barang."<<endl;
	                    goto h;
	                }
	            }
	        }
	   }
	}
	
	cout<<"Jumlah beli : ";cin>>jumlahbeli;
	
	//total harga
	if(kode==data[0].kodebarang)
	{
		totalharga = jumlahbeli*data[0].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode==data[1].kodebarang)
	{
	    totalharga = jumlahbeli*data[1].harga;
	    cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode==data[2].kodebarang)
	{
		totalharga = jumlahbeli*data[2].harga;
		cout<<"Total harga : "<<totalharga<<endl;
	}
	else if(kode==data[3].kodebarang)
    {
	    totalharga = jumlahbeli*data[3].harga;
	    cout<<"Total harga : "<<totalharga<<endl;
    }
	else if(kode==data[4].kodebarang)
	{
	    totalharga = jumlahbeli*data[4].harga;
	    cout<<"Total harga : "<<totalharga<<endl;
    }
    else
    {
        cout<<"Kode barang yang Anda masukkan tidak valid."<<endl;
	    cout<<"Silakan input ulang kode barang."<<endl;
	    goto h;
    }
	cout<<"------------------------------------------------------------------------"<<endl;
	
	cout<<"Bayar : ";cin>>bayar;
	cout<<"------------------------------------------------------------------------"<<endl;
	
	//diskon
	if(totalharga>=50000)
	{
		diskon = totalharga*5/100;
		cout<<"Diskon : "<<diskon<<endl;
	}
	else if(totalharga>=500000)
	{
		diskon = totalharga*10/100;
		cout<<"Diskon : "<<diskon<<endl;
	}
	else
	{
		diskon = totalharga*0/100;
		cout<<"Diskon : "<<diskon<<endl;
	}
	
	//PPN
	if((totalharga<50000) && (totalharga>=0))
	{
	    ppn = totalharga*2/100;
	    cout<<"PPN : "<<ppn<<endl;
	}
	else if((totalharga<500000) && (totalharga>=50000))
	{
	    ppn = totalharga*5/100;
	    cout<<"PPN : "<<ppn<<endl;
	}
	else if((totalharga<5000000) && (totalharga>=500000))
	{
	    ppn = totalharga*10/100;
	    cout<<"PPN : "<<ppn<<endl;
	}
	else
	{
	    ppn = totalharga*15/100;
	    cout<<"PPN : "<<ppn<<endl;
	}
	
	cout<<"------------------------------------------------------------------------"<<endl;
	
	grandtotal = totalharga+ppn-diskon;
	cout<<"Grand Total : "<<grandtotal<<endl;
	cout<<"Kembalian : "<<bayar-grandtotal<<endl;
	
	cout<<"Anda ingin ulang?";cin>>pilih;
	if((pilih=='Y') || (pilih=='y'))
	{
	    goto h;
	}
	else
	{
		cout<<"**********TERIMA KASIH***********"<<endl;
	}

}