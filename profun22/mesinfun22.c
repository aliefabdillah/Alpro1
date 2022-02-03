/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz profun22 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include "headfun22.h"
void tampil(int lap, int n, char str1[][50], char str2[][50]){
	int i=0, j=0, k = 0;
	int spasi=0;
	char gabungan[50][50];
	
	while(i<n && j<n){
		if(i == j){
			strcpy(gabungan[k++], str1[i++]);
			strcpy(gabungan[k++], str2[j++]);
		}
	}
	for(i=0;i<n*2;i++){
		for(j=0;j<spasi;j++){
			printf(" ");
		}
		printf("%s\n", gabungan[i]);
		spasi = spasi + strlen(gabungan[i])-lap;
	}
}
