#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	int x,i=0,s=0,p=0,il=0,z=0;

	for(;;){
		printf("Podaj liczbe calkowita:");
		scanf("%d",&x);
		if(x<0)break;
		if(x%2==0)p++;
		if((x<5)||(x>10)){
			if(z==0){il++;z++;};
			il=il*x;
			}
		i++;
		s=s+x;
		printf("Srednia arytmetyczna: %f\nIloczyn liczb z spoza przedzialu: %d\nIlosc liczb parzystych: %d\n\n", (float)s/i,il,p);
	}

	

	return 0;
}



for(i=0;i<=1000;i++){
	x[i]=0;
}





