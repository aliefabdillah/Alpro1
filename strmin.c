/*Saya Alief Muhammad Abdillah 2003623 mengerjakan strmin20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <string.h>

int main(){
	int i,j,k,n;
	char kalimat[200];
	
	scanf("%s", &kalimat);
	scanf("%d", &n);
	
	int panjang = strlen(kalimat);
	char huruf[n];
	int nilai[n];
	int jumlah = 0;
	
	for(i=0;i<n;i++){
		scanf(" %c", &huruf[i]); scanf("%d", &nilai[i]);
	}
	for(i=0;i<n;i++){
		jumlah = 0;
		for(j=0;j<panjang;j++){
			if(kalimat[j] == huruf[i]){
				jumlah++;
			}
		}
		
		if(jumlah >= nilai[i]){
			printf("aku sih yes\n");
		}
		else{
			printf("aku sih no\n");
		}
	}
	
	return 0;
}
	
	