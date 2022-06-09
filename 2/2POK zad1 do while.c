#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,xp,xk;
	int i=0;
	
	printf("Podaj wartosc x, xp, xk \n");
	scanf("%f %f %f", &x, &xp, &xk);
	printf("\n");
	
	if(pow(x,1)<=xk){
		do{
			i++;
			if(pow(x,i)>=xp)printf("%f \n",pow(x,i));
		}while(pow(x,i)<xk);
	}

	return 0;
}
