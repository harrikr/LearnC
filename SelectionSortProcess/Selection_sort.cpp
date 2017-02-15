#include "iostream.h"
#include "conio.h"
#include "windows.h"

int data[10];
int n,t,x,y;
void Input(){
	cout<<"Masukkan jumlah data = ";cin>>n;
   cout<<"--------------------------------------"<<endl;
   for(int i=0;i<n;i++){
   	cout<<"Masukkan data ke-"<<(i+1)<<" = ";cin>>data[i];
   }
   cout<<endl;
}
void Tampil(){
	for(int i=0;i<n;i++){
   	cout<<data[i]<<" ";
   }
   cout<<endl;
}
void Selection_sort(){
	for(int i=0;i<n;i++){
   	x=i;
      for(y=i+1;y<n;y++){
      	if(data[x]>data[y]){
         	x=y;
         }
   	}
      t=data[x];
      data[x]=data[i];
      data[i]=t;
   	Tampil();
   }
   cout<<endl;
}
main(){
	char ex;
	home:
   clrscr();
	cout<<"====================================="<<endl;
   cout<<" Selection Sort "<<endl;
   cout<<"===================================== "<<endl;
   Input();
   cout<<"Proses Selection Sort"<<endl;
   cout<<"-------------------------------------"<<endl;
   Tampil();
   Selection_sort();
   cout<<"-------------------------------------"<<endl;
   cout<<"\nApakah anda yakin ingin keluar ? [Y/T] ";
   ex=getche();
   if(ex=='Y'||ex=='y'){
   	exit(1);
   }else{
   	goto home;
   }
   getch();
}
