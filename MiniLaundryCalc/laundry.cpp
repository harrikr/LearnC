#include <iostream.h>
#include <conio.h>
#define selimut 4500          //konstanta
#define pakaian 3500
#define jeans 5000
#define karpet 4500
main(){
long int kode,berat,s,j,p,k;    //variabel
char ulang;
ulang='y';
do           //pengulangan
	{clrscr();
  	cout<<"|------------------------|"<<endl;
	cout<<"   Kalkulator Laundry     "<<endl;
	cout<<"|------------------------|"<<endl;
  	//cout<<"|	  by:harrikr |"<<endl;
	cout<<"|========================|"<<endl<<endl;
	cout<<"|------------------------|"<<endl;
	cout<<"| 	Kode Barang	 |"<<endl;
	cout<<"|________________________|"<<endl;
	cout<<"|		  	 |"<<endl;
	cout<<"|1=Selimut   	3=Pakaian|"<<endl;
	cout<<"|2=Jeans	4=Karpet |"<<endl;
	cout<<"|________________________|"<<endl<<endl;
	cout<<"Masukkan Kode Barang = ";cin>>kode;
	cout<<"Berat Barang (Kg) = ";cin>>berat;

switch (kode){                    //percabangan
case 1:
	s=berat*selimut;
		cout<<"\nHarga yang harus dibayar untuk laundry selimut adalah Rp."<<s<<endl;
		cout<<"Coba Lagi? [Y/T] : "; cin>>ulang;
	break;
case 2:
	j=berat*jeans;
		cout<<"Harga yang harus dibayar untuk laundry jeans adalah Rp."<<j<<endl;
		cout<<"Coba Lagi? [Y/T] : "; cin>>ulang;
	break;
case 3:
	p=berat*pakaian;
		cout<<"Harga yang harus dibayar untuk laundry pakaian adalah Rp."<<p<<endl;
		cout<<"Coba Lagi? [Y/T] : "; cin>>ulang;
	break;
case 4:
	k=berat*karpet;
		cout<<"Harga yang harus dibayar untuk laundry karpet adalah Rp."<<k<<endl;
		cout<<"Coba Lagi? [Y/T] : "<<endl; cin>>ulang;
	break;
}}
while((ulang=='y')||(ulang=='Y'));
if ((ulang!='y')||(ulang!='Y')){
cout<<"Press anything to exit...";
}
getch();
}
