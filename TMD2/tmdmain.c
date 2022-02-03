/*Saya Alief Muhammad Abdillah mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//bagian main

#include "tmdhead.h"

int main(){
	int i, n, kode, tebal;
	int panjang[50];		//arrat penampung panjang setiap string
	
	scanf("%d", &kode);		//input kode
	scanf("%d", &n);		//input panjang string / n
	
	char kata[n][50];		//inisiasi string sebanyak n
	i=0;
	while(i<n){				//perulangan input string
		scanf("%s", kata[i]);
		panjang[i] = strlen(kata[i]);		//inisiasi pemasukan panjang setiap string ke dalam array panjang
		i++;
	}
	
	scanf("%d", &tebal);		// input tebal
	
	output(kode, n, panjang,tebal);		//pemanggilan prosedur output
	
	return 0;
}