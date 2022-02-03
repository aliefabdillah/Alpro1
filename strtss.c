/*Saya Alief Muhammad Abdillah 2003623 mengerjakan strtss20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <string.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	char kata[n][50];
	int pendek[n];
	int max_pendek = 0;
	
	i=0;
	while(i<n){
		scanf("%s", &kata[i]);
		pendek[i] = strlen(kata[0]);
		if(strlen(kata[i]) < pendek[i]){
			max_pendek = strlen(kata[i]);
		}
		i++;
	}
	
	char tampung[max_pendek][n];
	for(i=0;i<max_pendek;i++){
		for(j=0;j<n;j++){
			if(i<strlen(kata[j])){
				tampung[i][j] = kata[j][i];
			}
		}
	}
	
	i=0;
	while(i<max_pendek){
		j=0;
		while(j<i){
			printf("  ");
			j++;
		}
		j=0;
		while(j<n){
			printf("%c", tampung[i][j]);
			if(j<n-1){
				printf(" ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
				
	i=0;
	while(i<n){
		if(strlen(kata[i]) > max_pendek){
			j=max_pendek;
			while(j<strlen(kata[i])){
				printf("%c", kata[i][j]);
				j++;
			}
			printf("\n");
		}
		i++;
	}
	
	return 0;
}