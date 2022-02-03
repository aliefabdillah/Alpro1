#include <stdio.h>
#include <math.h>
/*
int main(){
	int n, i, total = 0, cek = 0;
	
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	i=0;
	while(i<n && cek == 0){
		
		if(arr[i]>=90){
			cek = 1;
		}
		
		i++;
	}
	
	if (cek==1){
		printf("Terdapat angka lebih dari 90\n");
	}
	else{
		printf("Tidak ada nilai diatas 90\n");
	}
	
	return 0;
}

int main(){
	printf("======= Sewa Alat Kamping ======\n");
	printf("1. Tenda            Rp. 25.000\n");
	printf("2. Sleeping Bag     Rp. 7000\n");
	printf("3. Matras           Rp. 3000\n");
	printf("4. Kompor Portable  Rp. 8000\n");
	printf("5. Carrier          Rp. 12000\n");
	printf("\n");
	
	int total = 0;
	char pilih = 'x';
	
	printf("Barang yang akan dibeli (hentikan dengan 'o'): \n");
	while(pilih != 'o'){
		
		scanf(" %c", &pilih);
		switch(pilih){
			case '1':
				total += 25000;
				break;
			case '2':
				total += 7000;
				break;
			case '3':
				total += 3000;
				break;
			case '4':
				total += 8000;
				break;
			case '5':
				total += 12000;
				break;
			default:
				break;
		}
	}
	
	printf("Total Tagihan : Rp. %d\n", total);
	
	return 0;
}

int main(){
	int n, i, j, cek = 0;
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	i=0;
	while(i<n){
		j = 0;
		while(j<n && cek != 1){
			if(i != j){
				if (arr[i] % arr[j] == 0){
					cek = 1;
				}
			}
			j++;
		}
		i++;
	}
	
	if (cek == 1){
		printf("ada kelipatan\n");
	}
	else{
		printf("tidak ada kelipatan\n");
	}
	
	return 0;
}*/
typedef struct{
	int angka;
	char kode;
	int r_biner[50];
}gabungan

int main(){
	int n, i, j, temp, satu, cek = 0;
	scanf("%d", &n);
	
	gabungan arr[n];
	
	for(i=0;i<n;i++){
		scanf(" %c %d", &arr[i].kode, &arr[i].angka);
	}
	
	printf("Konversi\n");
	for(i=0;i<n;i++){
		printf("%c ", arr[i].kode);
		
		temp = arr[i].nilai;
		j=0
		satu = 0;
		while(temp!=0){
			arr[i].r_biner[j] = temp % 2;
			
			if (arr[i].r_biner[j] == 1){
				satu ++;
			}
			if(satu>=4){
				cek = 1;
			}
			
			temp /= 2;
			j++;
		}
		
		for(j= j -1 ; j >=0;j--){
			printf("%d", arr[i].r_biner[j]);
		}
		
		if(cek != 0){
			printf("cocok\n");
		}
		else{
			printf("tidak cocok\n");
		}
		
	}
	
	return 0;
}


int reminder, bobot=1, arr[i].gabungan = temp ;
	i = 0;
	while(i<n && temp != 0){
		arr[i].angka_desimal = 0;
		reminder = temp % 10;
		arr[i].angka_desimal = arr[i].angka_desimal + reminder*bobot;
		temp /= 10;
		bobot = bobot*2;
	}	