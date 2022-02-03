#include "headprak.h"

int main(){
	char masukan[50];
	int n;
	scanf("%s", masukan);
	scanf("%d", &n);
	
	int arr[n];
	hasil = 0;
	
	int i;
	for(i=0; i<n ;i++){
		//meminta masukan integer user
		scanf("%d", &arr[i]);
	}
	
	//memanggil prosedur tambah
	tambah(n, arr);
	
	//memanggil prosedur username
	username(masukan);
	
	return 0;
}