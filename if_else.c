#include <stdio.h>
#include <math.h>
/*
//studi kasus1 DONE!!!!
int main(){
//membuat variabel untuk huruf konsonan dan vokal	
	char ca, cb, cc; //untuk masukan
	
//membuat masukan / input untuk user huruf konsonan dan vokal
	scanf(" %c %c %c", &ca, &cb, &cc);

//membuat tiga kotak integer sebagai tanda 	
	int a=0, b=0, c=0;
	
//membuat progam untuk keluaran / ouput
	//memeriksa konsa
	if((ca != 'a') && (ca != 'i') 
	  && (ca != 'u') && (ca != 'e') 
	  && (ca != 'o')){
			a = 1;
	}
	//memeriksa vokal
	if((cb == 'a') || (cb == 'i') || 
	   (cb == 'u') || (cb == 'e') || 
	   (cb == 'o')){
			b = 1;
	}
	
	//memeriksa konsb
	if((cc != 'a') && (cc != 'i') && 
	   (cc != 'u') && (cc != 'e') && 
	   (cc != 'o')){
			c = 1;
	}	
//menampilkan hasil output
	if((a == 1) && (b == 1) && (c == 1)){
			printf("Memenuhi syarat\n");
	}else{
			printf("Tidak memenuhi syarat");	
	}
	return 0;
}	
/*
//studi kasus 2 DONE!!!
int main(){
	//membuat variabel untuk kedua angka
	int angka1, angka2;
//membuat masukan untuk user
	scanf("%d", &angka1);
	scanf("%d", &angka2);
//memeriksa angka pertama genap atau ganjl
	if(angka1 % 2 == 0){
			printf("bilangan pertama genap\n"); 
	}else{
			printf("bilangan pertama ganjil\n");
	}	
//memeriksa angka kedua genap atau ganjil
	if(angka2 % 2 != 0){
		printf("bilangan kedua ganjil\n");		
	}else{
		printf("bilangan kedua genap\n");
	}
	
	return 0;
}

//studi kasus 3 DONE!!!
int main(){ 
//membuat variabel untuk ketiga angka
	int a, b, c;

//membuat masukan user untuk ketiga angka
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
//memeriksa berbagai kemungkinan
	//jika bilangan pertama lebih besar dari kedua dan ketiga
	if((a > b) && (a > c)){
		if(b > c){			// membandingkan bilangan kedua dan ketiga
			printf("%d %d %d\n", a, b, c);
		}else{
			printf("%d %d %d\n", a, c, b);
		}
	}else if((b > a) && (b > c)){
		if(a > c){					// membandingkan bilangan pertama dan ketiga
			printf("%d %d %d\n", b, a, c);
		}else{
			printf("%d %d %d\n", b, c, a);
		}
	}else if((c > a) && (c > b)){
		if(a > b){					// membandingkan bilangan pertama dan kedua
			printf("%d %d %d\n", c, a, b);
		}else{
			printf("%d %d %d\n", c, b, a);
		}
	}
	return 0;
}

//latihan 1 DONE!!!!
int main(){
//membuat variabel angka
	int angka;
//membuat masukan untuk diisi oleh user
	printf("masukan sebuah angka: ");
	scanf("%d", &angka);
//memeriksa bilangan apakah satuan puluhan ratusan atau ribuan
	//memerikasa satuan
	if(angka < 10){
		printf("bilangan adalah satuan");	
	}
	//memeriksa puluhan
	if((angka >=10) && (angka < 100)){
		printf("bilangan adalah puluhan");
	}
	//mememeriksa ratusan
	if((angka >= 100) && (angka < 1000)){
		printf("bilangan adalah ratusan");
	}
	//memeriksa ribuan
	if((angka >= 1000) && (angka <= 9999)){
		printf("bilangan adalah ribuan");
	}
	
	return 0;
}

//latihan 2 DONE!!!!
int main(){
//membuat variabel 3 sisi segitiga
	int s1, s2, s3;
//membuat coding untuk masukan input
	printf("masukan 3 bilangan bulat sebagai sisi segitiga; \n");
	scanf("%d %d %d", &s1, &s2, &s3);
//membuat kemungkinan
	//jika segitiga sama sisi
	if ((s1 == s2) && (s1 == s3) && (s2 == s3)){
		printf("Segitiga sama sisi\n");
	//jika segitiga sama kaki	
	}else if ((s1 == s2) || (s1 == s3) || (s2 == s3)){
		printf("Segitiga sama kaki\n");
	//jika segitigas siku"
	}else if ((s1*s1 == (s2*s2) + (s3*s3)) || (s2*s2 == (s1*s1) + (s2*s2)) || (s3*s3) == (s2*s2) + (s1*s1)){
		printf("Segitiga Siku-Siku\n");
	}else{
		printf("Segitiga Sembarang\n");
	}
	return 0;
}*/

//latihan 3
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	int kali=a*b;
	int tambah=a+b;
	
	if((a % 2 != 0) && (b % 2 !=0)){
		printf(" %d\n", kali);
	}
	else if((a % 2 == 0) && (b % 2 == 0)){
		printf(" %d\n", tambah);
	}
	else{
		printf("%d %d", a, b);
	}
	
	return 0;
}
	
	
	
	
	
	
	
	