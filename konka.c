#include <stdio.h>

int main(){
// mendeklarasikan variabel input
	char a, b, c, d, e, f;
//membuat input untuk user
	scanf(" %c\n", &a);
	scanf(" %c\n", &b);
	scanf(" %c\n", &c);
	scanf(" %c\n", &d);
	scanf(" %c\n", &e);
	scanf(" %c", &f);
//membuat kemungkinan jika susuna huruf angka
	if((a >= 'a') && (a <= 'z') && (b >= '0') && (b <= '9') && (c >= 'a') && (c <= 'z') && (d >= '0') && (d <= '9') && (e >= 'a') && (e <= 'z') && (f >= '0') && (d <= '9')){
		printf("kombinasi valid\n");
	}
//membuat kemungkinan jika susunan angka huruf	
	else if((a >= '0') && (a <= '9') && (b >= 'a') && (b <= 'z') && (c >= '0') && (c <= '9') && (d >= 'a') && (d <= 'z') && (e >= '0') && (e <= '9') && (f >= 'a') && (f <= 'z')){
		printf("kombinasi valid\n");
	}
//jika tidak keduanya
	else{
		printf("kombinasi tidak valid\n");
	}
	
	return 0;
}	