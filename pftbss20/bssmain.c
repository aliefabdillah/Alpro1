/*Saya Alief Muhammad Abdillah 2003623 mengerjakan UAS pftbss20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

//bagian main
#include "bsshead.h"

int main(){
	int n, i;
	scanf("%d", &n);	//untuk deklarasi perulangan jumlah array
	
	char kata1[n][50];
	char kata2[n][50];
	
	for(i=0;i<n;i++){
		scanf("%s", &kata1[i]); scanf("%s", &kata2[i]);
	}
	
	banding(n, kata1, kata2);	//pemanggilan prosedur
	
	return 0;
}
	
	
	