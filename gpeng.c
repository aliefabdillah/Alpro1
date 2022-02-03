#include <stdio.h>
#include <math.h>

int main(){
	int gehu,bala,pisang,cireng, hari, total=0;
	
	scanf("%d", &gehu);
	scanf("%d", &bala);
	scanf("%d", &pisang);
	scanf("%d", &cireng);
	scanf("%d", &hari);
	
	if((gehu>0 && gehu<100) && (bala>0 && bala<100) && (pisang>0 && pisang<100) && 
	(cireng>0 && cireng<100) && (hari>0 && hari<1000)){
		
		gehu=gehu*100;
		bala=bala*150;
		pisang=pisang*75;
		cireng=cireng*175;
		
		total=(gehu+bala+cireng+pisang)*hari;
		printf("%d\n", total);
	}
	
	else{
		printf("masukan tidak valid\n");
	}
	
	return 0;
}
		