//prakalpro 2
#include <stdio.h>
int main(){
	char c1, c2, c3;
	scanf(" %c %c %c", &c1, &c2, &c3);
	
	int a=0, b=0, c=0;
	
	if((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'e') && (c1 != 'o')){
		a = 1;
	}
	if((c2 != 'a') && (c2 != 'i') && (c2 != 'u') && (c2 != 'e') && (c2 != 'o')){
		b = 1;
	}
	if((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'e') && (c3 != 'o')){
		c = 1;
	}
	
	if((a == 1) && (b == 1) && (c == 1)){
		printf("Tidak Valid\n");
	}
	else{
		printf("valid\n");
	}
	
	return 0;
}

/*
int main(){
	//deklarasi variabel
	int angka;
	
	//meminta masukan user angka
	printf("masukan angka : ");
	scanf("%d", &angka);
	
	if(angka < 10){
		printf("nilai kurang dari 10");
	}
	else{
		printf("nilai lebih dari 10");
	return 0;
}

int main(){
	//deklarasi variabel
	int angka;
	
	//meminta masukan user angka
	printf("masukan angka : ");
	scanf("%d", &angka);
	
	if(angka < 10){
		printf("nilai kurang dari 10");
	}
	if(angka % 2 == 0){
		printf("nilai adalah kelipatan 2");
	}
	if(angka % 5 == 0){
		printf("nilai adalah kelipatan 5");
	}
	
	return 0;
	
}

int main(){
	//deklarasi variabel
	int angka;
	
	//meminta masukan user angka
	printf("masukan angka : ");
	scanf("%d", &angka);
	
	if(angka > 20){
		if(angka > 50){
			printf("nilai lebih dari 50");
		}
		if(angka <= 50
	}
	if(angka % 2 == 0){
		printf("nilai adalah kelipatan 2");
	}
	
	
	return 0;
	
}*/
	