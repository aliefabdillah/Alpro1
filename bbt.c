#include <stdio.h>
#include <math.h>

int main(){
	int baris,kolom,n;
	scanf("%d", &n);
//bagian atas
	for(baris=1;baris<=n*2;baris++){
		for(kolom=1;kolom<=baris;kolom++){
			printf("*");
		}
		for(kolom=n*2;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=n*2;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf("*");
		}
		for(kolom=2;kolom<=baris;kolom++){
			printf("*");
		}
		for(kolom=n*2;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=n*2;kolom>baris;kolom--){
			printf(" ");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf("*");
		}
		printf("\n");
	}
//bagian tengah
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n*2+1;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=(n*4)-3;kolom++){
			printf("*");
		}
		printf("\n");
	}
//bagian bawah
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n*2+1;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=(n*3)-3;kolom++){
			printf(" ");
		}
		for(kolom=2;kolom<=baris;kolom++){
			printf(" ");
		}
		for(kolom=n;kolom>=baris;kolom--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}