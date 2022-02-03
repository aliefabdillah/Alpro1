/*Saya Alief Muhammad Abdillah 2003623 mengerjakan tp8 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
#include <string.h>
typedef struct{
	char kata[50], ganti[50], pengganti[50];
}masukan;
	
int main(){
	int i, j, k, l, n;
	masukan input[50];
	
	n=0;
	do{
		scanf("%s", &input[n].kata); // untuk masukan user
		//jika tidak menemukan kata santuy input berulang
		if(strcmp(input[n].kata, "santuy") != 0){
			scanf(" %c %c", &input[n].ganti, &input[n].pengganti); //jika input bukan santuy maka akan meminta masukan user untuk huruf ganti dan penggantinya
			n++;
		}
	}while(strcmp(input[n].kata, "santuy") != 0); //perulangan terus berlangsung selama bukan kata santuy
	
	
	int cari = 0;
	i=0;
	while(i<n){
		j=0;
		while(j<strlen(input[i].kata)){ //pengecekan sepanjang panjang katanya
			if((input[i].kata[j] == input[i].ganti) && (cari = 0)){ //mengecek apakah ada huruf yang akan di ganti pada stringnya
			
				input[i].kata[j] = input[i].pengganti; //huruf penggantinya menggantikan huruf yang ingin di ganti
			
			}
			else if((input[i].kata[j] == input[i].pengganti)){ //jika menemukan kata penggantinya yang sama dengan pengubah
				input[i].kata[j] = input[i].pengganti;
				cari = 1; 										//dan variabel cari berubah menjadi 1
			}
			else if((input[i].kata[j] == input[i].ganti) && (cari == 1)){		//jika huruf pengganti mendahului huruf yabg ingin di ubah
				input[i].kata[j] = input[i].ganti; 			//maka gabisa di ubah
			}
			j++;
		}
		i++;
	}
	
	//untuk mengecek jumlah ascii strignya
	int jumlah[50];
	int total = 0;
	i=0;
	while(i<n){
		j=0;
		while(j<strlen(input[i].kata)){
			jumlah[i] += input[i].kata[j];
			j++;
		}
		i++;
	}
	
	int ada_genap = 0;	//variabel pengeceken untuk genap
	int ada_ganjil = 0;	//variabel pengecekan untuk ganjilnya
	
	i=0;
	printf("=== KATA BAKU ===\n");
	while(i<n){
		
		if(jumlah[i] % 2 == 0){ 		//jika jumlah stringnya genap maka print baku
			
			ada_genap = 1; 				//dan kondisi ada_genapnya berubah menjadi 1
			
			if(ada_genap == 1){ 		//jika ada genapnya ada maka print string yang jumlah nya genap
				
				printf("%s", input[i].kata);
			}
			else{ 						//jika tidak ada string yang genap maka print "TIDAK ADA."
				printf("TIDAK ADA.");
			}
			printf("\n");
		}
		i++;
	}
	
	printf("=== KATA NON BAKU ===\n");
	i=0;
	while(i<n){
		if(jumlah[i] % 2 == 1){ 	//jika jumlah stringnya ganjil maka masuk ke kata non baku
			
			ada_ganjil = 1; 			//jika ada string yang ganjil maka ada_ganjil berubah menjadi 1
			
			if(ada_ganjil == 1){ 		//jika ada_ganjil = 1, maka print string yang ganjil
				
				printf("%s", input[i].kata);
			}
			else{ 						// jika tidak ada string yang ganjil sama seperti yang atas print TIDAK ADA.
				printf("TIDAK ADA.");
			}
			printf("\n");
		}
		i++;
	}
	
	return 0;
}