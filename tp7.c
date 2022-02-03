/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Tp7 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <string.h>

int main(){
	int i, j, n;
	char masukan[100];
	char kunci[100];
	char input[50];
	
	
	printf("Tanpa kata kunci: ");
	scanf("%s", &input);
	printf("\n");
	int panjang = strlen(input);

/*karena panjang string yang ganjil dengan panjang string
yang genap memiliki pola output yang berbeda jadi disini menggunakan
if else*/

//untuk panjang string yang ganjil	
	if(panjang%2 != 0){
		i=0;
		//perulangan bagian atas
		while(i<panjang/2){
			j=0;
			while(j<i){		//perulangan spasi awal
				printf(" ");
				j++;
			}
			printf("%c", input[i]); //menampilkan karakter string "a k u d"
			
			j=panjang/2; 	//untuk spasi yang tengah
			while(j>i){
				printf(" ");
				j--;
			}
			j=(panjang/2)-1;
			while(j>i){
				printf(" ");
				j--;
			}
			printf("%c", input[panjang-(i+1)]); // menampilkan kata "n d i a" yang nyerong ke atas
			printf("\n");
			i++;
		}
		
		//perulangan bagian tengah satu baris
		i=0;		
		while(i<1){		//perulangan spasi
			j=0;
			while(j<panjang/2){		
				printf(" ");
				j++;
			}
			printf("%c", input[panjang/2]); //menampilakan huruf tengah
			printf("\n");
			i++;
		}
		
		//perulangan bagian bawah
		i=0;
		while(i<panjang/2){		//perulangan untuk spasinya
			j=(panjang/2)-1;
			while(j>i){
				printf(" ");
				j--;
			}
			printf("%c", input[(panjang/2)-(i+1)]); //menampilkan kata " a k u d" yang bagian bawah
			
			j=0;
			while(j<=i){		//perulangan untuk spasi
				printf(" ");
				j++;
			}
			j=0;
			while(j<i){		
				printf(" ");
				j++;
			}
			printf("%c", input[(panjang/2)+(i+1)]); //menampilkan kata "n d i a" bagian bawah
			printf("\n");
			i++;
		}							
	}
	if(panjang%2 == 0){		//untuk panjang string yang genap
		i=0;
		while(i<panjang/2){
			j=0;
			while(j<i){
				printf(" ");
				j++;
			}
			printf("%c", input[i]);
			
			j=panjang/2;
			while(j>i+1){
				printf(" ");
				j--;
			}
			
			j=panjang/2;
			while(j>i+1){
				printf(" ");
				j--;
			}
			printf("%c", input[panjang - (i+1)]);
			printf("\n");
			i++;
		}
	
	
		i=0;
		while(i<(panjang/2)-1){
			j=(panjang/2)-2;
			while(j>i){
				printf(" ");
				j--;
			}
			printf("%c", input[(panjang/2)-(i+2)]);
			
			j=0;
			while(j<=i){
				printf(" ");
				j++;
			}
			
			j=0;
			while(j<=i){
				printf(" ");
				j++;
			}
			printf("%c", input[(panjang/2) + (i+1)]);
			printf("\n");
			i++;
		}
	}	
	return 0;
}