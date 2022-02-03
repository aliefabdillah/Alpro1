/*Saya Alief Muhammad Abdillah 2003623 mengerjakan Konvo1 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

#include <stdio.h>
int main(){
// membuat variabel untuk karakter
	char c1, c2, c3, c4, c5, c6;
// membuat progam masukan karakter untuk user
	scanf(" %c", &c1);
	scanf(" %c", &c2);
	scanf(" %c", &c3);
	scanf(" %c", &c4);
	scanf(" %c", &c5);
	scanf(" %c", &c6);
// membuat kotak kosong sebagai penanda
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
// membuat progam kemungkinan jika kombinasi vokal konsonan 
	// progam kemungkinan variabel c1
	if((c1 == 'a') || (c1 == 'i') || (c1 == 'u') || (c1 == 'e') || (c1 == 'o')){
		a = 1;
	}
	if((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'e') && (c1 != 'o')){
		a = 2;
	}
	// progam kemungkinan variabel c2
	if((c2 != 'a') && (c2 != 'i') && (c2 != 'u') && (c2 != 'e') && (c2 != 'o')){
		b = 1;
	}
	if((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'e') || (c2 == 'o')){
		b = 2;
	}
	// progam kemungkinan variabel c3
	if((c3 == 'a') || (c3 == 'i') || (c3 == 'u') || (c3 == 'e') || (c3 == 'o')){
		c = 1;
	}
	if((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'e') && (c3 != 'o')){
		c = 2;
	}
	// progam kemungkinan variabel c4
	if((c4 != 'a') && (c4 != 'i') && (c4 != 'u') && (c4 != 'e') && (c4 != 'o')){
		d = 1;
	}
	if((c4 == 'a') || (c4 == 'i') || (c4 == 'u') || (c4 == 'e') || (c4 == 'o')){
		d = 2;
	}
	// progam kemungkinan variabel c5
	if((c5 == 'a') || (c5 == 'i') || (c5 == 'u') || (c5 == 'e') || (c5 == 'o')){
		e = 1;
	}
	if((c5 != 'a') && (c5 != 'i') && (c5 != 'u') && (c5 != 'e') && (c5 != 'o')){
		e = 2;
	}
	// progam kemungkinan variabel c6
	if((c6 != 'a') && (c6 != 'i') && (c6 != 'u') && (c6 != 'e') && (c6 != 'o')){
		f = 1;
	}
	if((c6 == 'a') || (c6 == 'i') || (c6 == 'u') || (c6 == 'e') || (c6 == 'o')){
		f = 2;
	}
// membuat progam kemungkinan jika kombinasi konsonan vokal
	if((a == 1) && (b == 1) && (c == 1) && (d == 1) && (e == 1) && (f == 1)){
			printf("kombinasi valid\n");// output vokal konsonan
	}else if((a == 2) && (b == 2) && (c == 2) && (d == 2) && (e == 2) && (f == 2)){
			printf("kombinasi valid\n"); // ouput konsonan vokal
	}
// progam jika kombinasi tidak benar		
	else{
			printf("kombinasi tidak valid\n");//ouput kombinasi salah
	}
	return 0;
}