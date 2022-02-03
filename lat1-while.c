#include <stdio.h>

int main(){

	int n, i, j, cek=0;

	scanf("%d", &n);
	int arr[n];

	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	i=0;
	while(i<n && cek==0){
		j=0;
		while(j<n){
			if((arr[i] != arr[j]) && (arr[i] % arr[j]==0) && (cek==0)){
				cek=1;
				//printf("bandingin %d-%d\n", arr[i], arr[j]);
			}
			j++;
		}
		i++;
	}

	if(cek==1){
		printf("ada kelipatan\n");
	}else{
		printf("tidak ada kelipatan\n");
	}
	

	return 0;
}