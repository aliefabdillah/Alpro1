#include <stdio.h>
#include <math.h>

/*//while1
int main(){
	int i;
	
	i = 1;	//inisialisas
	while(i<=9){
		
		//proses
		i= i + 1;	//iterasi; kalo di for i++
	}


//mengecek apakah ada nilai array yang ganjil
int main(){
	int penghitung, arr[5], ketemu;
	
	for(penghitung=0;penghitung<5;penghitung++){
		printf("masukan angka: ");
		scanf("%d", &arr[penghitung]);
		printf("\n");
	}
	
	ketemu = 0;
	penghitung = 0;
	
	while((ketemu == 0) && (penghitung < 5)){
		if(arr[penghitung] % 2 == 1){
			ketemu = 1;
		}
		else{
			penghitung = penghitung + 1;
		}
	}
	
	if(ketemu == 1){
		printf("ada angka ganjil\n");
	}
	else{
		printf("tidak ada angka ganjil");
	}
	
	return 0;
}

//menampilkan nilai arrai tapi jika menemukan nilai arrai 999 proses berhenti
int main(){
	int i, arr[5];
	for(i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	
	i = 0;
	while((arr[i]!=999) && (i < 5)){
		printf("%d\n", arr[i]);
		i = i + 1;
	}
	
	return 0;
}


//menampilkan maximal 3 nilai array yang bernilai genap
int main(){
	int i, n;
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("masukan nilai array : ");
		scanf("%d", &arr[i]);
	}
	
	i = 0;
	int max = 0;
	while((max<3) && (i < n)){
		if(arr[i]%2==0){
			printf("%d ", arr[i]);
			max++;
		}
		i = i + 1;
	}
	
	return 0;
}


//membuat tipe struktur array
typedef struct{
	int x,y;
}titik;

int main(){
	titik ikatan[2];
	ikatan[0].x = 9;  // untuk mengisi kotak pertama
	ikatan[1].x = 10; //untuk mengisi kotak kedua
	return 0;
}

//menjumlahkan isi x dan y pada bungkusan
typedef struct{
	int x,y;
}titik;

int main(){
	int i,n, jx = 0 , jy = 0;
	scanf("%d", &n); // meminta masukan user mau berapa arrray
	
	titik ikatan[n];
	
	printf("masukan titik x: ");
	for(i=0;i<n;i++){
		scanf("%d", &ikatan[i].x);
	}
	
	printf("masukan titik y: ");
	for(i=0;i<n;i++){
		scanf("%d", &ikatan[i].y);
	}
	
	for(i=0;i<n;i++){
		jx = jx + ikatan[i].x;
		jy = jy + ikatan[i].y;
	}
	
	printf("jumlah x: %d\n", jx);
	printf("jumlah y: %d\n", jy);
	
	return 0;
}
	
//menampilkan nilai x yang ganjil dan y yang lebih besar dari x
typedef struct{
	int x,y;
}titik;

int main(){
	int i,n, jx = 0 , jy = 0;
	scanf("%d", &n); // meminta masukan user mau berapa arrray
	
	titik ikatan[n];
	
	printf("masukan titik x: ");
	for(i=0;i<n;i++){
		scanf("%d", &ikatan[i].x);
	}
	
	printf("masukan titik y: ");
	for(i=0;i<n;i++){
		scanf("%d", &ikatan[i].y);
	}
	
	for(i=0;i<n;i++){
		if((ikatan[i].x %2 == 1) && (ikatan[i].x < ikatan[i].y)){
			printf("%d %d\n", ikatan[i].x, ikatan[i].y);
		}
	}

	return 0;
}


//latihan 1
typedef struct{
	int alas;
	int tinggi;
	int miring;
}sisi;

int main(){
	int i, n;
	printf("masukan jumlah segitiga: "); scanf("%d", &n);
	
	sisi segitiga[n]; 
	for(i=0;i<n;i++){
		printf("masukan segitiga %d: ", i);
		scanf("%d %d %d", &segitiga[i].alas, &segitiga[i].tinggi, &segitiga[i].miring);
	}
	
	i = 0;
	int max = 0;
	while((max<3) && (i<n)){
		if((segitiga[i].alas * segitiga[i].alas) + (segitiga[i].tinggi * segitiga[i].tinggi) == (segitiga[i].miring * segitiga[i].miring)){
			printf("yang phytagoras adalah segitiga %d\n", i);
			printf("%d %d %d\n", segitiga[i].alas, segitiga[i].tinggi, segitiga[i].miring);
			max++;
		}
		i = i + 1;
	}
	
	return 0;
}*/
		
//latihan 2
int main(){
	int i, n;
	printf("masukan jumlah nilai arrai: "); scanf("%d", &n);
	
	float arr[n];
	for(i=0;i<n;i++){
		scanf("%.2f", &arr[i]);
	}
	
	int depan = arr[i];
	int belakang = (arr[i] - depan)*100;
	
	for(i=0;i<n;i++){
		if((depan % 2 == 0) && (belakang % 2 == 0)){
			printf("%.2f\n", arr[i]);
		}
	}
	
	return 0;
}
	
	