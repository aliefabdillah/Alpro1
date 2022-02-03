/*Saya Alief Muhammad Abdillah 2003623 mengerjakan UTS arrlib20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int i, bt, tuker, arr1[n], arr2[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr1[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d", &arr2[i]);
	}
	
	scanf("%d", &bt);
	int indeksTuker[bt];
	
	for(i=0;i<bt;i++){
		scanf("%d", &indeksTuker[i]);
		
		tuker = arr1[indeksTuker[i]];
		arr1[indeksTuker[i]]=arr2[indeksTuker[i]];
		arr2[indeksTuker[i]]=tuker;
	}
	
	for(i=0;i<n;i++){
      if(i==n/2-1 || i==n-1){
            printf("%d %d",arr1[i],arr2[i]);
            printf("\n");
        }
      if(i != n/2-1 && i != n-1){
            printf("%d %d ",arr1[i],arr2[i]);
        }
    }
	
	return 0;
}
	