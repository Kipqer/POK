#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	float x,xp,xk;
	int i=1;
	
	printf("Podaj wartosc x, xp, xk \n");
	scanf("%f %f %f", &x, &xp, &xk);
	printf("\n");
	
	while(pow(x,i)<=xk)
	{
		if(pow(x,i)>=xp)printf("%f \n",pow(x,i));
		i++;
	}
	
	return 0;
}
