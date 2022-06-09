#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,f=0;
	printf("Podaj wartosc x:\n");
	scanf("%f", &x);
	
	if((x>=1)&&(x<=7))f=pow(2*x+1/4,1.0/4);
	else f=cos(exp(2*x));
		
	printf("f(x)= %f", f);
	
	return 0;
}
