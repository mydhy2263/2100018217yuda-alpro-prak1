#include <iostream>
#include <math.h>			
using namespace std;

int tambah (int a, int b) { 
	int total = a + b;		
	return total;
}

int kurang (int a, int b) { 
	int total = a - b;		
	return total;
}

int kali (int a, int b) {	
	int total = a * b;		 
	return total;
}

float bagi (float a, float b) { 
	float total = a / b;		
	return total;
}

int main () {
	int menu;				
	float a,b,hasil;		
	char status;			
	do {					
		cout<<"PROGRAM KALKULATOR"<<endl;
		cout<<"Menu Operasi : "<<endl;
		cout<<"  1. Penambahan"<<endl;
		cout<<"  2. Pengurangan"<<endl;
		cout<<"  3. Perkalian"<<endl;
		cout<<"  4. Pembagian"<<endl;
		cout<<endl;
		cout<<"Pilih Menu No    :";cin>>menu;	
		cout<<"Bilangan Pertama :";cin>>a;		
		cout<<"Bilangan Kedua   :";cin>>b;		
		cout<<"\n";
		if (menu==1) {			
			cout<<"Hasil "<<a<<" + "<<b<<" = "<<tambah(a,b)<<endl;
		}
		else if (menu==2) {		
			cout<<"Hasil "<<a<<" - "<<b<<" = "<<kurang(a,b)<<endl;
		}
		else if (menu==3) {		
			cout<<"Hasil "<<a<<" x "<<b<<" = "<<kali(a,b)<<endl;
		}
		else if (menu==4) {		
			cout<<"Hasil "<<a<<" : "<<b<<" = "<<bagi(a,b)<<endl;
		}
		else {					
			cout<<"Tidak sesuai format...."<<endl;
		}
		cout<<"\nIngin Melanjutkan Operasi (Y/T) ?";	
		cin>>status;
		cout<<"\n";
	}
	while (status=='y');								
	cout<<"Program Selesai..."<<endl;
	return 0;
}