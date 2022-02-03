#include<stdio.h>

typedef struct{
	char kode;
	int biner[20]; //biner
	int pb; //panjang biner
	int nilai;
}bungkusan;

int main(){
	int n, i, j, k;

	scanf("%d", &n);
	bungkusan b[n]; //deklarasi array tipe data terstruktur

	//meminta masukan user
	for(i=0; i<n; i++){
		scanf(" %c", &b[i].kode);
		scanf("%d", &b[i].nilai);
	}

	//konversi biner
	int temp;
	for(i=0; i<n; i++){

		j=0;
		temp = b[i].nilai;
	    while(temp>0){
	    	b[i].biner[j] = temp%2;
	    	temp = temp/2;
			j++;
	    }

	    b[i].pb=j; //menyimpan panjang biner
	}

	//menampilkan biner ke layar
    int cek=0, satu=0;
	printf("Konversi\n");
    for(i=0; i<n; i++){

    	printf("%c ", b[i].kode);
    	satu=0;

	   	for(j=b[i].pb-1; j>=0; j--){
	   		printf("%d", b[i].biner[j]);

	   		if(b[i].biner[j]==1){
	   			satu+=1;
	   		}

	   		if(satu >= 4){
	   			cek=1;
	   		}
	   	}
		
		printf("\n");
    }

	if(cek==1){
		printf("cocok\n");
	}else{
		printf("tidak cocok\n");
	}
	
	return 0;
}
