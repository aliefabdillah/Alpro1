//praktek 10
#include <stdio.h>
#include <string.h>
/*
//pake pointer
int pangkat(int* a, int b){
	int i;
	int temp = *a;
	for(i=0;i<b-1;i++){
		*a = *a * temp;
	}
	
	return *a;
}

int main(){
	int x,y;
	scanf(" %d %d", &x, &y);
	
	printf("Angka x Akhir: %d \n", pangkat(&x,y));
	return 0;
}
*/
//buat progam terdiri dari array char dinamis panjang kali lebar dan mirror si arraynya
int mirror(int l, int p){
	int i,j;
	char arr[l][p];
	for(i=l;i>0;i--){
		for(j=p;j>0;j--){
			printf("%c\n", arr[i][j]);
		}
	}
	return arr[i][j];
}

int main(){
	int p, l;
	scanf("%d", &p);
	scanf("%d", &l);
	
	int arr[l][p];
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<p;j++){
			scanf(" %c\n", &arr[i][j]);
		}
	}
	
	mirror(l,j);
	
	return 0;
}