//untuk bagian mesin
//untuk deklarasi library nya menggunakan nama file si headernya

#include "header.h"

void pola(int n){ //dibagain mesin parameternya baru di beri variabel karena akan menjadi prosedur
	int i, j;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}

void tulisArrayInt(int n, int arr[n]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n", arr[i]);
	}
}