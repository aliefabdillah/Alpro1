/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz profun22 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include "headfun22.h"
int main(){
	int i,n;
	scanf("%d", &n);
	
	char string1[n][50];
	for(i=0;i<n;i++){
		scanf("%s", string1[i]);
	}
	char string2[n][50];
	for(i=0;i<n;i++){
		scanf("%s", string2[i]);
	}
	
	int lap;
	scanf("%d", &lap);
	
	tampil(lap, n, string1, string2);
	return 0;
}