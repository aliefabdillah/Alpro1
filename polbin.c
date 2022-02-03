/*Saya Alief Muhammad Abdillah 2003623 mengerjakan UTS Polbin20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>
int main(){
	int baris, kolom, n; //membuat variabel untuk baris kolom, dan jumlah masukan
	scanf("%d", &n); // membuat masukan untuk user
//baris ke 1
	for(baris=1;baris<=n;baris++){ //untuk perulangan baris
		for(kolom=1;kolom<=n;kolom++){ // untuk perulangan kolom
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n*5;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		printf("\n");
	}
//baris ke 2
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n*3;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		printf("\n");
	}
//baris ke 3
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n*3;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n*3;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		printf("\n");
	}
//baris ke 4
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n*3;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		printf("\n");
	}
//baris 5
	for(baris=1;baris<=n;baris++){
		for(kolom=1;kolom<=n;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=n*5;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=n;kolom++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}