/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz profun12 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include "headfun12.h"
int cek(int n, int m, char str1[][50], char str2[][50], char sub[]){
	int i=0, j=0;
	char mix[n+m][50];
	int loop, index;
	index =0;
	
	for(loop=0;loop<n;loop++){
		strcpy(mix[index] , str1[loop]);
		index++;
	}
	for(loop=0;loop<m;loop++){
		strcpy(mix[index] , str2[loop]);
		index++;
	}
	
	int total = 0;
	if(strstr(mix, sub) != '\0'){
		total++;
	}
	
	return total;
}
