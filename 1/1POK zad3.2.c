#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,f;
	printf("Podaj wartosc x:\n");
	scanf("%f", &x);
	
	if(x<=-5) f=2*x+10.0/3;
	else if(x>=7)	f=pow(sin(2*x)+pow(x,2),1.0/3);
	else f=sqrt(fabs(x))+exp(x/2+1);
	
	printf("f(x)= %f", f);
	
	return 0;
}
