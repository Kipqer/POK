#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,f;
	printf("Podaj wartosc x:\n");
	scanf("%f", &x);
	
	if(x<0) f=sqrt(fabs(2+x));
	else if(x==0) f=2;
	else f=pow(x,2)+exp(2*x);
	
	printf("f(x)= %f", f);
	
	return 0;
}
