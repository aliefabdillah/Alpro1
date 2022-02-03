#include <stdio.h>
#include <math.h>
/*
int main(){
	int i, n, max, min;
	scanf("%d", &n);
	
	int x[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}
	
	max = x[0];
	min = x[0];
	
	for(i=0; i<n; i++){
		if(x[i]>max){
			max = x[i];
		}
		if(x[i]<min){
			min = x[i];
		}
	}
	
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	
	return 0;
}
//latihan 2
int main (){
	int i, n, imax, imin, max, min, out1, out2;
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	imax = 0;
	imin= 0;
	max = arr[0];
	min = arr[0];
	
	for(i=0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
			imax = i;
		}
		if(arr[i]<min){
			min = arr[i];
			imin = i;
		}
	}
	out1= 0;
	out2 = 0;
	
	out1 = min * imax;
	out2 = max - imin;
	
	printf("%d\n", out1);
	printf("%d\n", out2);
	
	return 0;
}
*/

//latihan 1
int main (){
	int i, n;
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int check = 0;
	for(i=0;i<n;i++){
		if(arr[i] % 2 != 0){
			printf("%d", i); 
			printf(" ");
			check = 1;
		}
	}
	if(check != 1){
		printf("tidak ada bilangan ganjil!");
		
	}
	return 0;
}
	




