//untuk membuat bagian main atau progam utamanya
//sama disini si library nya pakai nama file si header

#include "header.h"

int main(){
	int b;
	scanf("%d", &b);
	
	pola(b);
	pola(b+1);
	pola(b+2);
	
	int kumpulan[b];
	
	int i;
	for(i=0;i<b;i++){
		scanf("%d", &kumpulan[i]);
	}
	
	tulisArrayInt(b, kumpulan);
	
	return 0;
}