/*Saya Alief Muhammad Abdillah mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
//bagian main

#include "tmdhead.h"

int main(){
	int i, n, kode, tebal;
	int panjang[50];
	
	scanf("%d", &kode);
	scanf("%d", &n);
	
	char kata[n][50];
	i=0;
	while(i<n){
		scanf("%s", kata[i]);
		panjang[i] = strlen(kata[i]);
		i++;
	}
	
	scanf("%d", &tebal);
	
	output(kode, n, panjang, tebal);
	
	return 0;
}
	