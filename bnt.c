#include <stdio.h>
#include <math.h>

int main(){
	int baris, kolom, n;
	scanf("%d", &n);
	
	for(baris=1;baris<=n;baris++){
		for(kolom=1; kolom<=baris; kolom++){
			printf("*");
		}
		for(kolom=n;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=n; kolom>baris; kolom--){
			printf(" ");
		}
		for(kolom=1; kolom<=baris; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=n; kolom++){
			printf("*");
		}
		for(kolom=1; kolom<=baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	
	for(baris=1; baris<=n-1; baris++){
		for(kolom=n-1;kolom>=baris;kolom--){
			printf("*");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf(" ");
		}
		for(kolom=n-1;kolom>=baris;kolom--){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=n-1;kolom>=baris;kolom--){
			printf("*");
		}
		printf("\n");
	}
	
	for(baris=1;baris<=n;baris++){
		for(kolom=1; kolom<=baris; kolom++){
			printf("*");
		}
		for(kolom=n;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=n; kolom>baris; kolom--){
			printf(" ");
		}
		for(kolom=1; kolom<=baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}