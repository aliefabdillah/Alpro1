//progam Perhitungan Kombinasi dan Permutasi
//Alief Muhammad Abdillah
//Ilmu Komputer - C1 
//2020

#include <stdio.h>

int faktorial(int n){				 // fungsi perhitungan faktorial
	int f = 0;
	
	if(n <= 1){						//jika nilai n < 1 / n = 0 
		return (1);					//maka hasil faktorialnya = 1
	}
	else{
		f = n * faktorial(n-1);		//jika nilai n >= 1 maka masuk ke rumus faktorial
		return (f);
	}
}

int main(){
	int n, r;						//deklarasi variabel n dan r
	int tanda = 1;					//deklarasi penanda
	int hasil = 0;					//varriabel untuk menampung hasil
	
	char P_atau_C;					//variabel karakter untuk pemilihan menggunakan permutasi ataua kombinasi
	char Y_atau_N;					//variabel karakter untuk pemilihan yes atau norm
	
	while(tanda){
		printf("\n======== Progam Perhitungan Kombinasi dan Permutasi ========\n");
		printf("Masukan Nilai n: "); //fungsi untuk menginput nilai n dari masukan user
		scanf("%d", &n);
		printf("Masukan Nilai r: "); //fungsi untuk menginput nilai r dari masukan user
		scanf("%d", &r);
	
		if(n<r){ 	//jika nilai n < r 
			printf("Nilai n tidak boleh kurang dari r\n");					//akan menampilkan tulisan di samping
			printf("\n");
		}
		else{		//jika nilai n > r
			printf("ketik P/p untuk (Permutasi) atau C/c untuk (Kombinasi): ");	 //menampilkan perintah memilih operasi kombinasi atau permutas
			scanf(" %c", &P_atau_C);
		
			if(P_atau_C == 'P' || P_atau_C == 'p'){							//jika masukan berupa huruf P/p maka akan menjalankan operasi permutasi
				hasil = faktorial(n)/faktorial(n-r);						//operasi permutasi
				printf("\n");
				printf("Jawaban : \n");										// menampilkan jawaban
				printf("%dP%d = %d!/(%d-%d)! = = %d\n", n,r,n,n,r,hasil);
			}
			else if(P_atau_C == 'C' || P_atau_C == 'c'){					//jika masukan huruf merupakan C/c akan menjalankan operasi kombinasi
				hasil = faktorial(n)/faktorial(r) * faktorial(n-r);			//operasi kombinasi
				printf("\n");
				printf("Jawaban : \n");										//menampilkan jawaban
				printf("%dC%d = %d!/%d!*(%d-%d)! = %d\n", n,r,n,r,n,r,hasil);
			}
			else{															//jika tidak memilih huruf P atau C
				printf("Tidak Memilih P/p dan C/c\n");
			}
		}
		
		printf("ingin Mengulang Perhitungan? ketik Y/N\n");					//pemilihan mengulang progam atau tidak
		scanf(" %c", &Y_atau_N);											//masukan huruf Y atau N
		
		if(Y_atau_N == 'Y' || Y_atau_N == 'y'){								//jika huruf masukan Y/y maka nilai tanda = 1 dan akan mengulang progamnya
			tanda = 1;
		}
		else if(Y_atau_N == 'N' || Y_atau_N == 'n'){						//jika huruf masukan N/n maka nilai tanda  = 0 dan progam akan berhenti
			tanda = 0;
		}
		else{																//jika huruf masukan bukan Y/N maka nilai tanda  = 0 dan progam akan berhenti
			printf("Tidak Memilih Y/y dan N/n\n");
			tanda = 0;
		}
	}
	return 0;
}