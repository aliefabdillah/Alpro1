/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Quiz TP4 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>

int main(){
	int n, baris, kolom;
	char code;
	
	scanf("%d", &n);
	scanf(" %c", &code);
	
	if((code=='a' || code=='A') || (code=='i' || code=='I') || (code=='u' || code=='U') || (code=='e' || code=='E') || (code=='o' || code=='O')){
	//baris pertama
		for(baris = 1; baris <= 1 ; baris++){
			for(kolom = 1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<= n*4 ; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//baris kedua	
		for(baris=1; baris <= n-2;baris++){
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom=1; kolom<=n*4; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=1; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//baris ketiga
		for(baris = 1; baris <= 1 ; baris++){
			for(kolom = 1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<= n*4 ; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//gelas bagian setengah kebawah
	//baris 1
		for(baris=1; baris<=n-1; baris++){
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=baris; kolom++){
				printf(" ");
			}
			for(kolom=2; kolom<=baris; kolom++){
				printf(" ");
			}
			for(kolom=n; kolom>=baris; kolom--){
				printf("*");
			}
			for(kolom=(n*2)-1; kolom>=baris; kolom--){
				printf(".,");
			}
			for(kolom=n; kolom>=baris; kolom--){
				printf("*");
			}
			printf("\n");
		}
	//baris 2
		for(baris=1; baris<=1; baris++){
			for(kolom=1; kolom <=(n*3)-1; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom <=(n*2)+2; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//bagian strip 1
		for(baris=1;baris<=1;baris++){
			for(kolom=1;kolom<=n*8; kolom++){
				printf("-");
			}
			printf("\n");
		}
	//bagian strip 2
		for(baris=1;baris<=1;baris++){
			for(kolom=1;kolom<=2;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=(n*8)-4;kolom++){
				printf("-");
			}
			printf("\n");
		}
	}
	else if((code!='a' && code!='A') && (code!='i' && code!='I') && (code!='u' && code!='U') && (code!='e' && code!='E') && (code!='o' && code!='O')){
	//baris pertama
		for(baris = 1; baris <= 1 ; baris++){
			for(kolom = 1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<= n*2 ; kolom++){
				printf(".,");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//baris kedua	
		for(baris=1; baris <= n-2;baris++){
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom=1; kolom<=n*2; kolom++){
				printf(".,");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=1; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//baris ketiga
		for(baris = 1; baris <= 1 ; baris++){
			for(kolom = 1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<= n*2 ; kolom++){
				printf(".,");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			for(kolom = 1; kolom<=n; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//gelas bagian setengah kebawah
	//baris 1
		for(baris=1; baris<=n-1; baris++){
			for(kolom=1; kolom<=n; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom<=baris; kolom++){
				printf(" ");
			}
			for(kolom=2; kolom<=baris; kolom++){
				printf(" ");
			}
			for(kolom=n; kolom>=baris; kolom--){
				printf("*");
			}
			for(kolom=(n*2)-1; kolom>=baris; kolom--){
				printf(".,");
			}
			for(kolom=n; kolom>=baris; kolom--){
				printf("*");
			}
			printf("\n");
		}
	//baris 2
		for(baris=1; baris<=1; baris++){
			for(kolom=1; kolom <=(n*3)-1; kolom++){
				printf(" ");
			}
			for(kolom=1; kolom <=(n*2)+2; kolom++){
				printf("*");
			}
			printf("\n");
		}
	//bagian strip 1
		for(baris=1;baris<=1;baris++){
			for(kolom=1;kolom<=n*8; kolom++){
				printf("-");
			}
			printf("\n");
		}
	//bagian strip 2
		for(baris=1;baris<=1;baris++){
			for(kolom=1;kolom<=2;kolom++){
				printf(" ");
			}
			for(kolom=1;kolom<=(n*8)-4;kolom++){
				printf("-");
			}
			printf("\n");
		}
	}
	return 0;
}