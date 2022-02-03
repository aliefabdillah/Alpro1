/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz profun12 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include "headfun12.h"
int main(){
	int i, n, m;
	
	scanf("%d", &n);
	char string1[n][50];
	for(i=0;i<n;i++){
		scanf("%s", string1[i]);
	}
	
	scanf("%d", &m);
	char string2[m][50];
	for(i=0;i<m;i++){
		scanf("%s", string2[i]);
	}
	
	char subkata[50];
	scanf("%s", subkata);
	
	printf("%d\n", cek(n,m,string1,string2,subkata));
	
	
	return 0;
}