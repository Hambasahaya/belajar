#include <iostream>
//menginclude liblary algorithm,untuk mengunakan fuct std sort()
#include <algorithm>
using namespace std;

//fucntion untuk melakukan buble sort
void b_sort(int data[],int size){
	//temp berfungsi untuk menyimpan index awal sebelum di tukar agar tidak hilang
	int temp;
	for(int a=1;a<size;a++){
		
		//perulanga pertama dilakukan dari data pertama,perulangan ini berfungsi untuk berapa kali proses perbandingan akan berjalan
		for(int b=0;b<size-a;b++){
			//perulanagan di mulai dari index ke 0,alasan kenapa di kurang dengan nilai a,karna jumlah data dengan index tidak sama
			//index dimulai dari 0,dan data di hitung dari satu,jika tidak di kurang maka proses perbandingan akan eroor
			//perulangan ini berfungsi untuk membadingkan data
			if(data[b]>data[b+1]){
				//temp berisi data index ke b yang sudah di bandingkan
				temp=data[b];
				//data ke kini berisi data update setelah penukaran data
				data[b]=data[b+1];
				//mengembalikan data yang hilang ke index ke akhir
				data[b+1]=temp;
			}
		}
	}
	for(int z=0;z<size;z++){
//		menampilkan data dimulai dari index ke 0
		cout<<data[z]<<"|";
	}
}
//funct untuk melakukan sort selection sort
void se_sort(int data[],int size){
//	berisi data  yang akan di tukar dan posisi untuk menukar data
	int temp,pos;
	for(int a=0;a<size;a++){
		//perulangan akan dimuali dari index ke 0
		//perulangan ini berfungsi untuk melakukan proses pertukaran data sesuai dengan jumlah banyaknya data
		temp=data[a];
		//temp,sekarang beris value data[a] yang sedang di loop
		pos=a;
		//pos,berisi nilai a yang sudah melakukan lop
		for(int b=a;b<size;b++){
			//prulangan ini berfungsi untuk membadingkan nilai
			if(data[b]>temp){
				//temp,berisi nilai data index ke nilai pada var b
				temp=data[b];
				//pos,bernilai yang sama dengan var b
				pos=b;			
		 }
		}
		data[pos]=data[a];
		//melakkuakn perukaran data yang index nya sesuai dengan nilai var a dengan data yang indexnya sama ddengan nilai pada var pos;
		data[a]=temp;
//		meyimpan data kembali atau mengisi data dengan index sesuai dengan nilai pada var a dengan value yang mangambil dari var temp;
	}
	for(int x=0;x<size;x++){
//		menampilkan data di mulai dari index ke 0 yaitu nilai awal pada var x
		cout<<data[x]<<" | ";
	}
}
int main(){
int data[]={100,2,90,4,99,3};
//mendapatkan jumlah data dinamis!
int size=sizeof(data)/sizeof(*data);	
cout<<"ini buble sort:";
//mengimkan parameter ke function b_sort berupa data yang ingin di sortir dan jumlah datanya 
b_sort(data,size);
cout<<endl;
cout<<endl;
cout<<"ini selection sort:";
//mengimkan parameter ke function se_sort berupa data yang ingin di sortir dan jumlah datanya
se_sort(data,size);
cout<<endl;
cout<<endl;
//sort menggunakn liblary algorithm
sort(data,data+size);
//menampilakn data yang sudah di sort dengan fuction std sort
cout<<"ini sort std:";
for(int x=0;x<size;x++){
	cout<<data[x]<<" | ";
}
}
