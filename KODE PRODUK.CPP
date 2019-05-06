#include <iostream.h>
#include <conio.h>
#include <string.h>

void main(){
	char Lokasi,Processor,Buatan;
   int Kapasitas;
   	cout<<"Maukkan Kode Produk : ";
      cin>>Lokasi>>Processor>>Kapasitas;
      cout<<"Spesifikasi Komputer :\n";
   switch(Lokasi)
{

// LOKASI
	case 'A':
   cout<<"Buatan Amerika \n";
   break;

   case 'J':
   cout<<"Buatan Jepang \n";
   break;

   case 'K':
   cout<<"Buatan Korea \n";
   break;

   case 'C':
   cout<<"Buatan China \n";
   break;

   case 'G':
   cout<<"Buatan German \n";
   break;

   case 'T':
   cout<<"Buatan Taiwan \n";
   break;

   default :
   cout<<"Anda Salah Input ";
   break;
   }
   switch(Processor)
   {

// PROCESSOR
   case '3' :
   cout<<"Processor : Intel 386 MHz \n";
   break;

   case '4' :
   cout<<"Processor : Intel 486 MHz \n";
   break;

   case '5' :
   cout<<"Processor : Intel Pentium MHz \n";
   break;

   default :
   cout<<"Anda Salah Input ";
   break;
}
// KAPASITAS DALAM GB
cout<<"Buatan : "<<Buatan<<endl;
cout<<"Processor : "<<Processor<<endl;
cout<<"Harddisk :"<<Kapasitas<<"GigaByte "<<endl ;
return;
}
