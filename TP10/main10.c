/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz tp10 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian main/progam utama
#include "head10.h"

int main(){
	int ciri = 0;
	char string[100];
	scanf("%s", string);
	
	ciri = cek(string);
	
	//kondisi
	if(ciri == 1){ //jika kata bukan palindrom 
		printf("%s\n", string); 
	}
	else{ 			//jika kata palindrom
		pola(string);
	}
	
	return 0;
}

