#include<stdio.h>

int main(){
	//deklarasi varibel
	char a,b,c;

	//meminta masukkan dari users
	scanf("%c %c %c", &a,&b,&c);

	//deklarasi parameter

	int p1 = 0,p2 = 0, p3 = 0;

	//pemenuhan parameter

	if(a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o'){
		p1 = 1;
	}
	else if(b == 'a' || b == 'i' || b == 'u' || b == 'e' || b == 'o'){
		p2 = 1;
	}
	else if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'){
		p3 = 1;
	}

	//pemenuhan syarat satu vokal
	if (p1 || p2 || p3 == 1){
		printf("valid");
	}else{
		printf("tidak valid");
	}

	return 0;
}