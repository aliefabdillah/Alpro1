#include <stdio.h>
#include <math.h>
//for count up = angka naik (angka konstan)
/*int main(){
	int i;
	
	for(i = 0; i < 10; i++){
		printf("aku suka matematika %d\n", i);
	}
	
	return 0;
}*/

// for count up (angka dinamis)
/*int main(){
	int n, i;
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		printf("aku suka matematika %d\n", i);
	}
	
	return 0;
}*/

// pertambahan berulang
/*int main(){
	int jumlah, penambah, berapa_kali;
	jumlah = 0;
	
	printf("masukan angka berapa kali akan di ulang: ");
	scanf("%d", &berapa_kali);
	//printf("\n");
	for(penambah = 1; penambah <= berapa_kali; penambah++){
		jumlah = jumlah + penambah;
	}
	printf("%d\n", jumlah);
	
	return 0;
}*/

//membuat bintang ke samping
/*int main(){
	int penghitung, bintang;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(penghitung=0;penghitung<=bintang;penghitung++){
		printf("*");
	}
	printf("\n");
	
	return 0;
}*/

//membuat bintang ke bawah atau banyak baris
/*int main(){
	int baris, bintang, kolom;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(baris=0;baris<=bintang;baris++){
		for(kolom=1;kolom<=bintang;kolom++){
		printf("*");
		}
		printf("\n");
	}
	
	return 0;
}*/

//membuat bintang pola tangga
/*int main(){
	int baris, bintang, kolom;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(baris=0;baris<=bintang;baris++){
		for(kolom=1;kolom<=baris;kolom++){ //banyak bintang = barisnya
		printf("*");
		}
		printf("\n");
	}
	
	return 0;
}*/

//for count down angka konstan
/*int main(){
	int i;
	for(i=10; i>=0; i--){
		printf("hitung %d\n", i);
	}
	printf("TEEEEEEEEEEET\n");
	return 0;
}*/

//jika berbatas
/*int main(){
	int n, i;
	scanf("%d", &n);
	for(i=n; i>=1; i--){
		printf("hitung %d\n", i);
	}
	printf("TEEEEEEEEEEET\n");
	return 0;
}*/

//membuat bintang piramida
/*int main(){
	int baris, bintang, kolom;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(baris=1;baris<=bintang;baris++){ //naik
		for(kolom=1;kolom<=baris;kolom++){ //banyak bintang = barisnya
		printf("*");
		}
		printf("\n");
	}
	
	for(baris=bintang-1;baris>=1;baris--){ //kebawah
		for(kolom=1;kolom<=baris;kolom++){ //banyak bintang = barisnya
		printf("*");
		}
		printf("\n");
	}
	
	return 0;
}*/

//membuat piramida bintang mirror yang atas
/*int main(){
	int baris, bintang, kolom;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(baris=1;baris<=bintang;baris++){ //naik
		for(kolom=bintang-baris;kolom>=1;kolom--){ //untuk spasi
			printf(" ");
		}
	
		for(kolom=1;kolom<=baris;kolom++){ 	//untuk bintangnya
		printf("*");						//banyak bintang = barisnya
		}
		printf("\n");
	}
	
	for(baris=1;baris<=bintang-1;baris++){ //kebawah
		for(kolom=1;kolom<=baris;kolom++){ //untuk spasi
			printf(" ");
		}
	
		for(kolom=bintang-baris;kolom>=1;kolom--){ //banyak bintang = barisnya
		printf("*");
		}
		printf("\n");
	}
	
	return 0;
}*/

//membuat bintang selamg
/*int main(){
	int baris, bintang, kolom;
	printf("masukan banyaknya bintang: ");
	scanf("%d", &bintang);
	
	for(baris=1;baris<=bintang;baris++){ //naik
		for(kolom=bintang-baris;kolom>=1;kolom--){ //untuk spasi
			printf(" ");
		}
	
		for(kolom=1;kolom<=baris;kolom++){ 	//untuk bintangnya
		printf("*");						//banyak bintang = barisnya
		}
		
		for(kolom=bintang-baris;kolom>=1;kolom--){ //untuk spasi
			printf(" ");
		}
	
		for(kolom=1;kolom<=baris;kolom++){ 	//untuk bintangnya
		printf("*");						//banyak bintang = barisnya
		}
	
		printf("\n");
	} 
	return 0;
}*/

//membuat bintang lucu
int main(){
	int baris, kolom, bintang;
	printf("banyaknya bintang: ");
	scanf("%d", &bintang);
//bagian atas	
	for(baris = 1; baris<=bintang;baris++){
		for(kolom = bintang-baris;kolom >= 1; kolom--){
			printf(" ");
		}
		for(kolom = 1;kolom<=baris;kolom++){
			printf("*");
		}
		for(kolom = 1;kolom<=baris-1;kolom++){
			printf("*");
		}
		for(kolom = bintang-baris;kolom>=1;kolom--){
			printf(" ");
		}
		for(kolom=1;kolom<=bintang;kolom++){
			printf("*");
		}
		for(kolom=bintang-baris+1;kolom>=1;kolom--){
			printf("*");
		}
			
	printf("\n");
	}
//bagian bawah
	for(baris = 1;baris<=bintang-1;baris++){
		for(kolom=1;kolom<=baris;kolom++){
			printf(" ");
		}
		for(kolom=bintang-baris;kolom>=1;kolom--){
			printf("*");
		}
		for(kolom=bintang-baris-1;kolom>=1;kolom--){
			printf("*");
		}
		for(kolom=1;kolom<=baris;kolom++){
			printf(" ");
		}
		for(kolom=1;kolom<=bintang;kolom++){
			printf("*");
		}
		for(kolom=1;kolom<=baris+1;kolom++){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}