#include <stdio.h>
#include <math.h>

/*//mengisi array
int main(){
	int tab_int[5];
	int penghitung;
	
	for(penghitung=0; penghitung<5; penghitung++){
		tab_int[penghitung] = penghitung;
	}
	for(penghitung=0; penghitung<5; penghitung++){
		printf("%d\n", tab_int[penghitung]);
	}
	
	return 0;
}

///mengisi array 2
int main(){
	int n, i;
	int tab[n];
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &tab[i]);
		printf("%d\n", tab[i]);
	}
	
	return 0;
}

///mengisi array hanya bilangan ganjil
int main(){
	int n;
	scanf("%d", &n);
	
	int tab[n], i;
	
	for(i=0; i<n; i++){
		scanf("%d", &tab[i]);
	}
	for(i=0; i<n; i++){
		if(tab[i] %2 == 1){
			printf("%d", tab[i]);
		}
	}
	return 0;
}

///menghitung banyaknya isi array yang ganjil
int main(){
	int n;
	scanf("%d", &n);
	
	int i, tab[i];
	int jumlah = 0;
	
	for(i=0; i<n; i++){
		scanf("%d", &tab[i]);
	}
	for(i=0; i<n; i++){
		if(tab[i] %2 == 1){
			jumlah++;
		}
	}
	printf("banyaknya elemen array yang ganjil: %d", jumlah);
	
	return 0;
}
		
/// menampilkan separuh isi array
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<(n/2); i++){
		printf("%d,", arr[i]);
	}
	
	return 0;
}

/// mencari nilai max di dalam array
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(i=1; i<n; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("nilai maximal : %d", max);
	return 0;
}

///tantangan latihan1
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(i=0; i<n; i++){
		if(arr[i] %2 != 1){
			if(max < arr[i]){
			max = arr[i];
			}
	    }
	}
	printf("nilai maximal : %d", max);
	return 0;
}

///tantangan latihan 2
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr1[n], arr2[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr1[i]);
	}
	for(i=0; i<n; i++){
		scanf("%d", &arr2[i]);
	}
	
	int max = arr1[0];
	int min = arr2[0];
	
	for(i=1; i<n; i++){
		if(max < arr1[i]){
			max = arr1[i];
		}
	}
	for(i=1; i<n; i++){
		if(min > arr2[i]){
			min = arr2[i];
		}
	}
	
	int total = max + min;
	printf("hasil: %d + %d = %d", max, min, total);
	
	return 0;
}

/// tantangan latihan 3
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[10]; 
	float rata2, total=0;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		total = total + arr[i];
	}
	
	rata2 = total/n;
	
	printf("hasil : %f", rata2);
	
	return 0;
}

*///tantangan latihan 4
int main(){
	int n;
	scanf("%d", &n);
	
	int i, arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for(i=0; i<n; i++){
		if(i % 2 == 0){
			if(min > arr[i]){
				min = arr[i];
			}
		}
	}
	printf("nilai minimal di indeks genap : %d", min);
	return 0;
}
	