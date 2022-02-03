#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j;
	char masukan[50];
	char baru1[50];
	char baru2[50];
	int cek = 0;
	
	scanf(" %c", &masukan);
	int panjang = masukan;
	
	i=0;
	while(i <= panjang){
		
		if(masukan[i] == '|'){
			cek = 1;
			if(cek == 0){
				baru1 = masukan;
			}
		}
	}

	printf("%c", baru1[i]);
	
	return 0;
}

