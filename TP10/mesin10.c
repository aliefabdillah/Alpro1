/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz tp10 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian mesin
#include "head10.h"

//fungsi pengecekan kata palindrom
int cek(char str[]){
	int i, panjang, tanda;
	panjang = 0;
	tanda = 0;
	panjang  = strlen(str);
	
	i=0;
	do{
		//pengecekan stringnya berupa kata palindro atau bukan
		if(str[i] != str[panjang-i-1]){ //jika string tidak sama dengan string kebalikannya 
			tanda = 1;	//tanda = 1;
		}
		i++;
	}while(i<panjang);	//syarat perulangan 
	
	return tanda;
}

void pola(char str[]){
	int i, j, panjang = 0;
	panjang = strlen(str);
	
	//jika panjang string genap
	if(panjang%2 == 0){
		//pola bagian atas
		for(i=0;i<panjang/2;i++){
			for(j=0;j<(panjang/2);j++){
				printf(" ");
			}							
			printf("%c", str[i]);
			printf("\n");
		}
		//untuk bagian tengah
		for(i=0;i<1;i++){
			for(j=0;j<panjang/2;j++){
				printf("%c", str[j]);
			}
			for(j=0;j<1;j++){
				printf(" ");
			}
			for(j=0; j<panjang/2;j++){
				printf("%c", str[j+(panjang/2)]);
			}
			printf("\n");
		}
		//untuk bagian bawah
		for(i=0;i<panjang/2;i++){
			for(j=0;j<panjang/2;j++){
				printf(" ");
			}
			printf("%c", str[i+(panjang/2)]);
			printf("\n");
		}
	}
	
	//jika panjang string ganjil
	if(panjang%2 != 0){
		//pola bagian atas
		for(i=0;i < (panjang/2) ;i++){
			for(j=0;j<(panjang/2);j++){
				printf(" ");
			}
			printf("%c", str[i]);
			printf("\n");
		}
		//bagian tengah
		for(i=0;i<1;i++){
			for(j=0;j<panjang/2;j++){
				printf("%c", str[j]);
			}
			for(j=0;j<=panjang/2;j++){
				printf("%c", str[j+(panjang/2)]);
			}
			printf("\n");
		}
		//bagian bawah
		for(i= 0 ; i<panjang/2 ; i++){
			for(j=0;j<(panjang/2);j++){
				printf(" ");
			}
			printf("%c", str[i+(panjang/2)+1]);
			printf("\n");
		}
	}
}