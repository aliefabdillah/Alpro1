/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz sarcil14 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

int main(){
	int besar1, besar2, besar3, kecil1, kecil2, kecil3;
	
	scanf("%d", &besar1);
	scanf("%d", &besar2);
	scanf("%d", &besar3);
	scanf("%d", &kecil1);
	scanf("%d", &kecil2);
	scanf("%d", &kecil3);
	
	if((besar1%kecil1==0 && besar2%kecil1==0 && besar1!=0 && besar2!=0) || (besar1%kecil2==0 && besar2%kecil2==0 && besar1!=0 && besar2!=0) || (besar1%kecil3==0 && besar2%kecil3==0 && besar1!=0 && besar2!=0)){
		printf("valid\n");
	}
	
	else if((besar1%kecil1==0 && besar3%kecil1==0 && besar1!=0 && besar3!=0) || (besar1%kecil2==0 && besar3%kecil2==0 && besar1!=0 && besar3!=0) || (besar1%kecil3==0 && besar3%kecil3==0 && besar1!=0 && besar3!=0)){
		printf("valid\n");
	}
	
	else if((besar3%kecil1==0 && besar2%kecil1==0 && besar3!=0 && besar2!=0) || (besar3%kecil2==0 && besar2%kecil2==0 && besar3!=0 && besar2!=0) || (besar3%kecil3==0 && besar2%kecil3==0 && besar3!=0 && besar2!=0)){
		printf("valid\n");
	}
	
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}