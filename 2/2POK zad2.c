#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,s=0,s2=0,a=0,a2=0,i=1, j=1;
	for(;;){
		printf("Podaj liczbe rzeczywista: ");
		scanf("%f",&x);
		
		s=s+x;
		if(x>0)s2=s2+x;
		a=(a+x)/i;
		if(x<0){a2=(a2+x)/j;j++;}
		
		printf("Suma: %f\nSuma dodatnich: %f\nSrednia: %f\nSrednia ujemnych: %f \n \n \n", s,s2,a,a2);
		
		i++;
	}
	

	return 0;
}
